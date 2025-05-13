module SingleCycleCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);

// When input start is zero, cpu should reset
// When input start is high, cpu start running
wire rst = start;

// The rst signal is active low, which means the module will reset if the rst signal is zero.
// And you should follow this design.

// TODO: connect wire to realize SingleCycleCPU
// The following provides simple template,
// you can modify it as you wish except I/O pin and register module
wire [31:0] pc_i, pc_o, inst, readData1, readData2, imm, ALUSrcB, ALUOut, memData, writeData;
wire [31:0] branchAddr, PCPlus4, branchTarget;
wire [6:0] opcode = inst[6:0]; 
wire [4:0] rd = inst[11:7], rs1 = inst[19:15], rs2 = inst[24:20];
wire [3:0] ALUCtl;
wire [2:0] funct3 = inst[14:12];
wire [1:0] memtoReg, ALUOp, PCSel;
wire memRead, memWrite, ALUSrc, regWrite, BrEq, BrLT, zero, funct7 = inst[30];


PC m_PC(
    .clk(clk),
    .rst(rst),
    .pc_i(pc_i),
    .pc_o(pc_o)
);

Adder m_Adder_1(
    .a(pc_o),
    .b(32'd4),
    .sum(PCPlus4)
);

InstructionMemory m_InstMem(
    .readAddr(pc_o),
    .inst(inst)
);

Control m_Control(
    .opcode(opcode),
    .funct3(funct3),
    .BrEq(BrEq),
    .BrLT(BrLT),
    .memRead(memRead),
    .memtoReg(memtoReg),
    .ALUOp(ALUOp),
    .memWrite(memWrite),
    .ALUSrc(ALUSrc),
    .regWrite(regWrite),
    .PCSel(PCSel)
);

// For Student:
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(rst),
    .regWrite(regWrite),
    .readReg1(rs1),
    .readReg2(rs2),
    .writeReg(rd),
    .writeData(writeData),
    .readData1(readData1),
    .readData2(readData2)
);

// ======= for validation =======
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

BranchComp m_BranchComp(
    .A(readData1),
    .B(readData2),
    .BrEq(BrEq),
    .BrLT(BrLT)
);

ImmGen m_ImmGen(
    .inst(inst),
    .imm(imm)
);


ShiftLeftOne m_ShiftLeftOne(
    .i(imm),
    .o(branchAddr)
);

Adder m_Adder_2(
    .a(pc_o),
    .b(branchAddr),
    .sum(branchTarget)
);

Mux3to1 #(.size(32)) m_Mux_PC(
    .sel(PCSel),
    .s0(PCPlus4),
    .s1(branchTarget),
    .s2(ALUOut),
    .out(pc_i)
);


Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(ALUSrc),
    .s0(readData2),
    .s1(imm),
    .out(ALUSrcB)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(ALUOp),
    .funct7(funct7),
    .funct3(funct3),
    .ALUCtl(ALUCtl)
);

ALU m_ALU(
    .ALUctl(ALUCtl),
    .A(readData1),
    .B(ALUSrcB),
    .ALUOut(ALUOut),
    .zero(zero)
);


DataMemory m_DataMemory(
    .rst(rst),
    .clk(clk),
    .memWrite(memWrite),
    .memRead(memRead),
    .address(ALUOut),
    .writeData(readData2),
    .readData(memData)
);


Mux3to1 #(.size(32)) m_Mux_WriteData(
    .sel(memtoReg),
    .s0(ALUOut),
    .s1(memData),
    .s2(PCPlus4),
    .out(writeData)
);

endmodule
