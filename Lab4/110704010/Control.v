module Control (
    input [6:0] opcode,
    input [2:0] funct3,
    input BrEq, BrLT,
    output reg memRead,
    output reg [1:0] memtoReg,
    output reg [1:0] ALUOp,
    output reg memWrite,
    output reg ALUSrc,
    output reg regWrite,
    output reg [1:0] PCSel,
    output reg Flush_ctrl,
    output reg PCorR1,
    output reg BranchOrJump
);

    // TODO: implement your Control here
    // Hint: follow the Architecture (figure in spec) to set output signal
    always @(*) begin
        // Default
        memRead   = 0;
        memtoReg  = 2'b00;
        ALUOp     = 2'b00;
        memWrite  = 0;
        ALUSrc    = 0;
        regWrite  = 0;
        PCSel     = 2'b00;
        Flush_ctrl = 0;
        PCorR1 = 0;
        BranchOrJump = 0;

        case (opcode)
            // R-Type
            7'b0110011: begin 
                regWrite = 1;
                ALUOp = 2'b10;
                ALUSrc = 0;
            end

            // I-Type
            7'b0010011: begin 
                regWrite = 1;
                ALUOp = 2'b11;
                ALUSrc = 1;
            end

            // Load
            7'b0000011: begin 
                regWrite = 1;
                memRead = 1;
                ALUSrc = 1;
                ALUOp = 2'b00;
                memtoReg = 2'b01;
            end

            // Store
            7'b0100011: begin 
                memWrite = 1;
                ALUSrc = 1;
                ALUOp = 2'b00;
            end

            // Branch
            7'b1100011: begin
                ALUOp = 2'b01;
                PCSel = (funct3 == 3'b000 && BrEq) ? 2'b01 :  // BEQ
                        (funct3 == 3'b001 && ~BrEq) ? 2'b01 :  // BNE
                        (funct3 == 3'b100 && BrLT) ? 2'b01 :  // BLT
                        (funct3 == 3'b101 && ~BrLT) ? 2'b01 : // BGE
                        2'b00;
                Flush_ctrl = (funct3 == 3'b000 && BrEq) ? 1 :  // BEQ
                             (funct3 == 3'b001 && ~BrEq) ? 1 :  // BNE
                             (funct3 == 3'b100 && BrLT) ? 1 :  // BLT
                             (funct3 == 3'b101 && ~BrLT) ? 1 : // BGE
                             0;
                BranchOrJump = 1;
            end

            // JAL
            7'b1101111: begin 
                regWrite = 1;
                memtoReg = 2'b10;
                PCSel = 2'b01;
                Flush_ctrl = 1;
                BranchOrJump = 1;
            end

            // JALR
            7'b1100111: begin 
                regWrite = 1;
                memtoReg = 2'b10;
                PCSel = 2'b01;
                ALUSrc = 1;
                Flush_ctrl = 1;
                PCorR1 = 1;
                BranchOrJump = 1;
            end

            // Default
            default: begin
                // do nothing
            end
        endcase
    end


endmodule

