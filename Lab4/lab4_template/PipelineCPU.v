module PipelineCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);

// When input start is zero, cpu should reset
// When input start is high, cpu start running

// The rst signal is active low, which means the module will reset if the rst signal is zero.
// And you should follow this design.

// TODO: connect wire to realize PipelineCPU
// The following provides simple template,
// you can modify it as you wish except I/O pin and register module

Mux2to1 #(.size(32)) m_Mux_PC(
    .sel(PCSel[0]),
    .s0(PCPlus4),
    .s1(branchTarget),
    .out(pc_i)
);

wire [31:0] pc_i, pc_o;
PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(pc_i),
    .pc_o(pc_o)
);

wire [31:0] PCPlus4;
Adder m_Adder_1(
    .a(pc_o),
    .b(32'd4),
    .sum(PCPlus4)
);

wire [31:0] inst;
InstructionMemory m_InstMem(
    .readAddr(pc_o),
    .inst(inst)
);

// IF_ID ==============================================================
wire [95:0] IF_ID;
Pipeline_Register #(.WIDTH(96)) m_IF_ID(
    .clk(clk),
    .rst(start),
    .Flush_ctrl(Flush_ctrl),
    .Flush_HD(0),
    .data_i({
        // pipe reg
        PCPlus4,    // PCPlus4  95:64
        pc_o,       // pc_o     63:32
        inst        // inst     31:0
    }),
    .data_o(IF_ID)
);

wire BrEq, BrLT, memRead, memWrite, ALUSrc, regWrite, Flush_ctrl, PCorR1;
wire [1:0] memtoReg, ALUOp, PCSel;
Control m_Control(
    .opcode(IF_ID[6:0]),
    .funct3(IF_ID[14:12]),
    .BrEq(BrEq),
    .BrLT(BrLT),
    .memRead(memRead),
    .memtoReg(memtoReg),
    .ALUOp(ALUOp),
    .memWrite(memWrite),
    .ALUSrc(ALUSrc),
    .regWrite(regWrite),
    .PCSel(PCSel),
    .Flush_ctrl(Flush_ctrl),
    .PCorR1(PCorR1)
);

// For Student:
// Do not change the Register instance name!
// Or you will fail validation.
wire [31:0] writeData, readData1, readData2;
Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(MEM_WB[130]),
    .readReg1(IF_ID[19:15]),
    .readReg2(IF_ID[24:20]),
    .writeReg(MEM_WB[11:7]),
    .writeData(writeData),
    .readData1(readData1),
    .readData2(readData2)
);

// ======= for validation =======
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

wire id_ForwardA, id_ForwardB;
wire [1:0] ex_ForwardA, ex_ForwardB;
Forwarding_Unit FW_Unit(
    .id_R1(IF_ID[19:15]),    // Source register 1 in ID stage
    .id_R2(IF_ID[24:20]),    // Source register 2 in ID stage
    .ex_R1(ID_EX[19:15]),    // Source register 1 in EX stage
    .ex_R2(ID_EX[24:20]),    // Source register 2 in EX stage
    .mem_Rd(EX_MEM[11:7]),    // Destination register in MEM stage
    .wb_Rd(MEM_WB[11:7]),    // Destination register in WB stage
    .mem_RegWrite(EX_MEM[132]),    // Register write signal in MEM stage
    .wb_RegWrite(MEM_WB[130]),    // Register write signal in WB stage
    .id_ForwardA(id_ForwardA),     // Forward control for source 1 in ID stage
    .id_ForwardB(id_ForwardB),      // Forward control for source 2 in ID stage
    .ex_ForwardA(ex_ForwardA),     // Forward control for source 1 in EX stage
    .ex_ForwardB(ex_ForwardB)      // Forward control for source 2 in EX stage
);

// Branch Mux
wire [31:0] BranchA, BranchB;
Mux2to1 #(.size(32)) m_Mux_BranchA(
    .sel(id_ForwardA),
    .s0(readData1),
    .s1(EX_MEM[95:64]),
    .out(BranchA)
);

Mux2to1 #(.size(32)) m_Mux_BranchB(
    .sel(id_ForwardB),
    .s0(readData2),
    .s1(EX_MEM[95:64]),
    .out(BranchB)
);

BranchComp m_BranchComp(
    .A(BranchA),
    .B(BranchB),
    .BrEq(BrEq),
    .BrLT(BrLT)
);

wire [31:0] imm;
ImmGen m_ImmGen(
    .inst(IF_ID[31:0]),
    .imm(imm)
);

wire [31:0] branchAddr;
ShiftLeftOne m_ShiftLeftOne(
    .PCorR1(PCorR1),
    .i(imm),
    .o(branchAddr)
);

wire [31:0] branch_adder_input;
Mux2to1 #(.size(32)) m_Mux_jalr(
    .sel(PCorR1),
    .s0(IF_ID[63:32]),
    .s1(BranchA),
    .out(branch_adder_input)
);

wire [31:0] branchTarget;
Adder m_Adder_2(
    .a(branch_adder_input),
    .b(branchAddr),
    .sum(branchTarget)
);

// ID_EX ==============================================================
wire [167:0] ID_EX;
Pipeline_Register #(.WIDTH(168)) m_ID_EX(
    .clk(clk),
    .rst(start), 
    .Flush_ctrl(0),
    .Flush_HD(0),
    .data_i({
        // controls
        regWrite,      // 167
        memtoReg[1:0], // 166:165
        memWrite,      // 164
        memRead,       // 163
        ALUOp[1:0],    // 162:161
        ALUSrc,        // 160

        // pipe reg
        IF_ID[95:64],  // PCPlus4   159:128
        BranchA,     // readData1 127:96
        BranchB,     // readData2 95:64
        imm,           // imm       63:32
        IF_ID[31:0]    // inst      31:0
    }), 
    .data_o(ID_EX)
);

// Forward Mux
wire [31:0] ForwardA, ForwardB;
Mux3to1 #(.size(32)) m_Mux_ForwardA(
    .sel(ex_ForwardA),
    .s0(ID_EX[127:96]),
    .s1(writeData),
    .s2(EX_MEM[95:64]),
    .out(ForwardA)
);

Mux3to1 #(.size(32)) m_Mux_ForwardB(
    .sel(ex_ForwardB),
    .s0(ID_EX[95:64]),
    .s1(writeData),
    .s2(EX_MEM[95:64]),
    .out(ForwardB)
);

wire [31:0] ALUSrcB;
Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(ID_EX[160]),
    .s0(ForwardB),
    .s1(ID_EX[63:32]),
    .out(ALUSrcB)
);

wire [3:0] ALUCtl;
ALUCtrl m_ALUCtrl(
    .ALUOp(ID_EX[162:161]),
    .funct7(ID_EX[30]),
    .funct3(ID_EX[14:12]),
    .ALUCtl(ALUCtl)
);

wire [31:0] ALUOut;
wire zero;
ALU m_ALU(
    .ALUctl(ALUCtl),
    .A(ForwardA),
    .B(ALUSrcB),
    .ALUOut(ALUOut),
    .zero(zero)
);

// EX_MEM ==============================================================
wire [132:0] EX_MEM;
Pipeline_Register #(.WIDTH(133)) m_EX_MEM (
    .clk(clk),
    .rst(start),
    .Flush_ctrl(0),
    .Flush_HD(0),
    .data_i({
        // controls
        ID_EX[167],     // regWrite     132
        ID_EX[166:165], // memtoReg     131:130
        ID_EX[164],     // memWrite     129
        ID_EX[163],     // memRead      128

        // pipe reg
        ID_EX[159:128], // PCPlus4      127:96
        ALUOut,         // ALUOut       95:64
        ForwardB,   // readData2    63:32
        ID_EX[31:0]     // inst         31:0
    }),
    .data_o(EX_MEM)
);

wire [31:0] memData;
DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(EX_MEM[129]),
    .memRead(EX_MEM[128]),
    .address(EX_MEM[95:64]),
    .writeData(EX_MEM[63:32]),
    .readData(memData)
);

// MEM_WB ==============================================================
wire [130:0] MEM_WB;
Pipeline_Register #(.WIDTH(131)) m_MEM_WB (
    .clk(clk),
    .rst(start),
    .Flush_ctrl(0),
    .Flush_HD(0),
    .data_i({
        // controls
        EX_MEM[132],     // regWrite 130
        EX_MEM[131:130], // memtoReg 129:128

        // pipe reg
        EX_MEM[127:96],  // PCPlus4  127:96
        EX_MEM[95:64],   // ALUOut   95:64
        memData,         // memData  63:32
        EX_MEM[31:0]     // inst     31:0
    }),
    .data_o(MEM_WB)
);

Mux3to1 #(.size(32)) m_Mux_WriteData(
    .sel(MEM_WB[129:128]),
    .s0(MEM_WB[95:64]),
    .s1(MEM_WB[63:32]),
    .s2(MEM_WB[127:96]),
    .out(writeData)
);

endmodule
