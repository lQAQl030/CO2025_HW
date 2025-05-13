# extern int fibo_asm(int term)

.section .text
.global fibo_asm

fibo_asm:
    # init
	addi sp, sp, -20    # make space
	sw ra, 16(sp)       # save ra
	sw s0, 12(sp)       # save s0
	sw s1, 8(sp)        # save s1
	addi s0, sp, 20     # move s0 to new position

    # declaration
	sw a0, -20(s0)      # int e

	lw a5, -20(s0)      # a5 = e
	bne a5, zero, .L2   # if(e != 0) goto .L2
	li a5, 0            # ret = 0
	j .L3

.L2:# if fall 1
	lw a4, -20(s0)      # a4 = e
	li a5, 1            # a5 = 1
	bne a4, a5, .L4     # if(e != 1) goto .L4
	li a5, 1            # ret = 1
	j .L3

.L4:# if fall 2
	lw a5, -20(s0)      # a5 = e
	addi a5, a5, -1     # e--
	mv a0, a5           # fibo_asm(a0)
	call fibo_asm
	mv s1, a0           # s1 = ret

	lw a5, -20(s0)      # a5 = e (reassign bc fibo_asm wash it)
	addi a5, a5, -2     # e -= 2
	mv a0, a5           # fibo_asm(a0)
	call fibo_asm
	mv a5, a0           # a5 = ret
	add a5, s1, a5      # fibo_asm(e-1) + fibo_asm(e-2)

.L3:# return
	mv a0, a5           # a0 = ret
	lw ra, 16(sp)       # load ra
	lw s0, 12(sp)       # load s0
	lw s1, 8(sp)        # load s1
	addi sp, sp, 20     # release space
	jr ra               # return
