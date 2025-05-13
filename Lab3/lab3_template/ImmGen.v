module ImmGen (
    /* verilator lint_off UNUSEDSIGNAL */
    input [31:0] inst,
    output reg signed [31:0] imm
);
    // ImmGen generate imm value base opcode
    always @(*) begin
        case (inst[6:0]) // opcode
            7'b0010011, // I-type (ADDI, ...)
            7'b0000011, // I-type (LW)
            7'b1100111: // I-type (JALR)
                imm = {{20{inst[31]}}, inst[31:20]};

            7'b0100011: // S-type
                imm = {{20{inst[31]}}, inst[31:25], inst[11:7]};

            7'b1100011: // B-type
                imm = {{21{inst[31]}}, inst[7], inst[30:25], inst[11:8]};

            7'b1101111: // J-type
                imm = {{13{inst[31]}}, inst[19:12], inst[20], inst[30:21]};

            default:
                imm = 32'b0;
        endcase
    end


endmodule

