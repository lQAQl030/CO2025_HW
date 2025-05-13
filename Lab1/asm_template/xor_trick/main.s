# extern int asm_entry(int *arr, int size);

.section .text
.global asm_entry

asm_entry:
    # init
    addi sp, sp, -24    # make space
    sw s0, 20(sp)       # save s0
    addi s0, sp, 24     # move s0 to new pos

    # declaration
    sw a0, -20(s0)      # int *arr
    sw a1, -24(s0)      # int size
    sw zero, -8(s0)     # int ret = 0;
    sw zero, -12(s0)    # int i = 0
    j .L2               # goto .L2

.L3:# loop body
    lw a5, -12(s0)      # a5 = i
    slli a5, a5, 2      # i << 2
    lw a4, -20(s0)      # a4 = *arr
    add a5, a4, a5      # a5 -> arr[i]
    lw a5, 0(a5)        # a5 = arr[i]
    lw a4, -8(s0)       # a4 = ret
    xor a4, a4, a5      # ret ^= arr[i]
    sw a4, -8(s0)       # save ret
    lw a5, -12(s0)      # a5 = i
    addi a5, a5, 1      # i++
    sw a5, -12(s0)      # save i

.L2:# condition
    lw a4, -12(s0)      # a4 = i
    lw a5, -24(s0)      # a5 = size
    blt a4, a5, .L3     # if(i >= size) goto .L3
    lw a5, -8(s0)       # a5 = ret
    mv a0, a5           # a0 = ret

    # end
    lw s0, 20(sp)       # load s0
    addi sp, sp, 24     # release space
    ret                 # return
