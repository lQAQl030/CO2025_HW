# extern void entry(int *arr, int t, int *arr2)

.section .text
.global asm_dp

asm_dp:
    # init
    addi sp, sp, -28    # make space
    sw s0, 24(sp)       # save s0
    addi s0, sp, 28     # move s0 to new pos

    # declaration
    sw a0, -20(s0)      # int *arr
    sw a1, -24(s0)      # int t
    sw a2, -28(s0)      # int *dp_array
    addi t0, zero, 1    # t0 = 1
    sw t0, -8(s0)      # int i = 1
    sw zero, -16(s0)    # int j = 0
    j .L2               # goto .L2

.L3:# loop body 1
    j .L4               # goto .L4

.L5:# loop body 2
    lw a4, -8(s0)      # a4 = i
    lw t0, -20(s0)      # t0 -> arr
    lw t1, -16(s0)      # t1 = j
    slli t1, t1, 3      # j << 3 (j*2*4)
    add a5, t0, t1      # a5 -> arr[j*2]
    mv t2, a5           # t2 -> arr[j*2]
    lw a5, 0(a5)        # a5 = arr[j*2]
    sub a4, a4, a5      # a4 = i - arr[j*2]

    bge a4, zero, .B1   # goto .B1
    lw a4, -16(s0)       # a4 = j
    addi a4, a4, 1      # j++
    sw a4, -16(s0)       # save j
    j .L4

.B1:# if fall 1
    lw t0, -8(s0)      # t0 = i
    slli t0, t0, 2      # t0 = [i]
    slli t1, a4, 2      # t1 = [i - arr[j*2]]

    lw t3, -28(s0)      # t3 -> dp_array[]
    add a4, t3, t0      # a4 -> dp_array[i]
    lw a4, 0(a4)        # a4 = dp_array[i]

    add a5, t3, t1      # a5 -> dp_array[i - arr[j*2]]
    lw a5, 0(a5)        # a5 = dp_array[i - arr[j*2]]
    lw a6, 4(t2)        # a6 = arr[j*2+1]
    add a5, a5, a6      # a5 = dp_array[i - arr[j*2]] + arr[j*2+1]

    blt a4, a5, .B2     
    lw a4, -16(s0)       # a4 = j
    addi a4, a4, 1      # j++
    sw a4, -16(s0)       # save j
    j .L4

.B2:# if fall 2
    add a4, t3, t0      # a4 -> dp_array[i]
    sw a5, 0(a4)        # dp_array[i] = dp_array[i - arr[j*2]] + arr[j*2+1]
    lw a4, -16(s0)       # a4 = j
    addi a4, a4, 1      # j++
    sw a4, -16(s0)       # save j

.L4:# condition 2
    lw a4, -16(s0)      # a4 = j
    addi a5, zero, 6    # a5 = 6
    blt a4, a5, .L5     # if(j >= 6) goto .L5
    lw a5, -8(s0)      # a5 = i
    addi a5, a5, 1      # i++
    sw a5, -8(s0)      # save i
    sw zero, -16(s0)    # j = 0


.L2:# condition 1
    lw a4, -8(s0)      # a4 = i
    lw a5, -24(s0)      # a5 = t
    addi a5, a5, 1      # t+1
    blt a4, a5, .L3     # if(i >= t+1) goto .L3

    # end
    lw s0, 24(sp)       # load s0
    addi sp, sp, 28     # release space
    ret                 # return
