module ALU (
    input [3:0] ALUctl,
    input signed [31:0] A,B,
    output reg signed [31:0] ALUOut,
    output zero
);
    // ALU has two operand, it execute different operator based on ALUctl wire
    // output zero is for determining taking branch or not (or you can change the design as you wish)

    // TODO: implement your ALU here
    // Hint: you can use operator to implement
    always @(*) begin
        case(ALUctl)
            4'b0000: ALUOut = A & B;        // AND
            4'b0001: ALUOut = A | B;        // OR
            4'b0010: ALUOut = A + B;        // ADD
            4'b0011: ALUOut = A ^ B;        // XOR
            4'b0100: ALUOut = A >> B;       // SRL (logical right shift)
            4'b0101: ALUOut = A >>> B;      // SRA (arithmetic right shift)
            4'b0110: ALUOut = A - B;        // SUB
            4'b0111: ALUOut = (A < B) ? 1 : 0; // SLT (set less than)
            4'b1000: ALUOut = A << B;       // SLL (logical left shift)
            default: ALUOut = 0;            // default
        endcase
    end
    assign zero = (ALUOut == 0);
endmodule

