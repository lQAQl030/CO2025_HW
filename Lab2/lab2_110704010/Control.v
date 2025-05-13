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
    output reg [1:0] PCSel
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
                        (funct3 == 3'b100 && BrLT) ? 2'b01 :  // BLT
                        (funct3 == 3'b101 && ~BrLT) ? 2'b01 : // BGE
                        2'b00;
            end

            // JAL
            7'b1101111: begin 
                regWrite = 1;
                memtoReg = 2'b10;
                PCSel = 2'b01;
            end

            // JALR
            7'b1100111: begin 
                regWrite = 1;
                memtoReg = 2'b10;
                PCSel = 2'b10;
                ALUSrc = 1;
            end

            // LUI
            7'b0110111: begin 
                regWrite = 1;
                ALUSrc = 1;
                memtoReg = 2'b00;
            end

            // AUIPC
            7'b0010111: begin 
                regWrite = 1;
                ALUSrc = 1;
                memtoReg = 2'b00;
            end

            default: begin
                // Do nothing
            end
        endcase
    end


endmodule

