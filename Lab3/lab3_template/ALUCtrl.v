module ALUCtrl (
    input [1:0] ALUOp,
    input funct7,
    input [2:0] funct3,
    output reg [3:0] ALUCtl
);

    // TODO: implement your ALU control here
    // For testbench verifying, Do not modify input and output pin
    // Hint: using ALUOp, funct7, funct3 to select exact operation
    always @(*) begin
        case (ALUOp)
            2'b00: begin
                // Load/Store (always add)
                ALUCtl = 4'b0010;  // ADD
            end
            2'b01: begin
                // Branch (beq, bne)
                case (funct3)
                    3'b000: ALUCtl = 4'b0110; // BEQ → SUB
                    3'b001: ALUCtl = 4'b0110; // BNE → SUB (same ALU op)
                    default: ALUCtl = 4'b1111; // Invalid
                endcase
            end
            2'b10: begin
                // R-type (based on funct7 and funct3)
                case ({funct7, funct3})
                    4'b0000: ALUCtl = 4'b0010; // ADD
                    4'b1000: ALUCtl = 4'b0110; // SUB
                    4'b0111: ALUCtl = 4'b0000; // AND
                    4'b0110: ALUCtl = 4'b0001; // OR
                    4'b0010: ALUCtl = 4'b0111; // SLT
                    4'b0001: ALUCtl = 4'b1000; // SLL
                    4'b0100: ALUCtl = 4'b0011; // XOR
                    4'b0101: ALUCtl = 4'b0100; // SRL
                    4'b1101: ALUCtl = 4'b0101; // SRA
                    default: ALUCtl = 4'b1111; // Invalid
                endcase
            end
            2'b11: begin
                // I-type arithmetic (funct7 = 0 for immediate ops)
                case (funct3)
                    3'b000: ALUCtl = 4'b0010; // ADDI
                    3'b111: ALUCtl = 4'b0000; // ANDI
                    3'b110: ALUCtl = 4'b0001; // ORI
                    3'b010: ALUCtl = 4'b0111; // SLTI
                    3'b100: ALUCtl = 4'b0011; // XORI
                    3'b001: ALUCtl = 4'b1000; // SLLI
                    3'b101: begin
                        if (funct7 == 1'b0)
                            ALUCtl = 4'b0100; // SRLI
                        else
                            ALUCtl = 4'b0101; // SRAI
                    end
                    default: ALUCtl = 4'b1111; // Invalid
                endcase
            end
            default: ALUCtl = 4'b1111; // Invalid
        endcase
    end


endmodule

