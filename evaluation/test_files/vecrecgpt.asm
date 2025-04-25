    # Inputs:
    # a0 = base address of array
    # a1 = length of array (number of elements)
    # Output:
    # a2 = sum (reduction)

    li a2, 0            # sum = 0
    li t0, 0            # index i = 0
loop:
    beq t0, a1, done    # if i == len, exit loop

    slli t1, t0, 2      # t1 = i * 4 (offset in bytes)
    add t2, a0, t1      # t2 = address of array[i]
    lw t3, 0(t2)        # t3 = array[i]
    add a2, a2, t3      # sum += array[i]

    addi t0, t0, 1      # i++
    j loop              # jump back to loop

done:
    # result is in a2

