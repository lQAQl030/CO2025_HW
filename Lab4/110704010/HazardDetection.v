module HazardDetection(
    input wire [4:0] id_R1,      // Source register 1 in ID stage
    input wire [4:0] id_R2,      // Source register 2 in ID stage
    input wire [4:0] ex_Rd,       // Destination register in EX stage
    input wire [4:0] mem_Rd,       // Destination register in MEM stage
    input wire ex_memRead,
    input wire ex_regWrite,
    input wire mem_memRead,
    input wire BranchOrJump,
    output reg RePC,             // re-fetch the flushed instruction
    output reg Flush_HD    // flush IF/ID reg & ID/EX reg
);

    // This unit checks for potential data hazards that cannot be resolved by forwarding.

    // TODO: implement your hazard detection unit here
    always @(*) begin
        // Default
        RePC = 0;
        Flush_HD = 0;

        // lw -> addi, lw -> beq
        if ((ex_memRead) && (ex_Rd == id_R1 || ex_Rd == id_R2)) begin
            RePC = 1;
            Flush_HD = 1;
        end

        // lw -> nop -> beq
        else if ((BranchOrJump) && (mem_memRead) && (mem_Rd == id_R1 || mem_Rd == id_R2)) begin
            RePC = 1;
            Flush_HD = 1;
        end

        // addi -> beq
        else if ((BranchOrJump) && (ex_regWrite) && (ex_Rd == id_R1 || ex_Rd == id_R2)) begin
            RePC = 1;
            Flush_HD = 1;
        end
    end

    // Hint:
    // You can design your own inputs and outputs as needed, as long as everything functions
    // correctly in the end.
    // Refer to the textbook for scenarios where forwarding cannot resolve data hazards,
    // for example, where using a stall might be necessary.

    // Be mindful of data hazards that may occur with branch instructions.
    // Data hazards can arise when a branch instruction depends on the result of previous instructions,
    // such as when the values being compared in a branch are not yet computed.
    // In such cases, if forwarding cannot resolve the hazard, you may need to insert a stall to avoid incorrect execution.
    


endmodule
