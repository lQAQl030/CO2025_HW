module ShiftLeftOne (
    input wire PCorR1,
    input signed [31:0] i,
    output signed [31:0] o
);

    // TODO: implement your shift left 1 here
    assign o = (PCorR1) ? i : i << 1;


endmodule

