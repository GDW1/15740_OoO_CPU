#Written by ChatGPT
  # A in a0, B in a1, C in a2
  # All matrices 2x2, stored row-major
  # Load A[0][0] into t0
  lw t0, 0(a0)        # A[0][0]
  lw t1, 0(a1)        # B[0][0]
  li t2, 0            # clear accumulator
  # t2 = A[0][0] * B[0][0] via repeated addition
mul_loop1:
  beq t1, zero, end_mul1
  add t2, t2, t0
  addi t1, t1, -1
  beq zero, zero, mul_loop1
end_mul1:
  # t2 holds partial result for C[0][0]
  # now do A[0][1] * B[1][0]
  lw t0, 4(a0)        # A[0][1]
  lw t1, 8(a1)        # B[1][0]
  li t3, zero
mul_loop2:
  beq t1, zero, end_mul2
  add t3, t3, t0
  addi t1, t1, -1
  beq zero, zero, mul_loop2
end_mul2:
  add t2, t2, t3      # C[0][0] = A[0][0]*B[0][0] + A[0][1]*B[1][0]
  sw t2, 0(a2)
  # Now compute C[0][1] = A[0][0]*B[0][1] + A[0][1]*B[1][1]
  lw t0, 0(a0)        # A[0][0]
  lw t1, 4(a1)        # B[0][1]
  li t2, 0
mul_loop3:
  beq t1, zero, end_mul3
  add t2, t2, t0
  addi t1, t1, -1
  beq zero, zero, mul_loop3
end_mul3:
  lw t0, 4(a0)        # A[0][1]
  lw t1, 12(a1)       # B[1][1]
  li t3, 0
mul_loop4:
  beq t1, zero, end_mul4
  add t3, t3, t0
  addi t1, t1, -1
  beq zero, zero, mul_loop4
end_mul4:
  add t2, t2, t3
  sw t2, 4(a2)        # C[0][1]
  # Now compute C[1][0] = A[1][0]*B[0][0] + A[1][1]*B[1][0]
  lw t0, 8(a0)        # A[1][0]
  lw t1, 0(a1)        # B[0][0]
  li t2, 0
mul_loop5:
  beq t1, zero, end_mul5
  add t2, t2, t0
  addi t1, t1, -1
  beq zero, zero, mul_loop5
end_mul5:
  lw t0, 12(a0)       # A[1][1]
  lw t1, 8(a1)        # B[1][0]
  li t3, 0
mul_loop6:
  beq t1, zero, end_mul6
  add t3, t3, t0
  addi t1, t1, -1
  beq zero, zero, mul_loop6
end_mul6:
  add t2, t2, t3
  sw t2, 8(a2)        # C[1][0]
  # Now compute C[1][1] = A[1][0]*B[0][1] + A[1][1]*B[1][1]
  lw t0, 8(a0)        # A[1][0]
  lw t1, 4(a1)        # B[0][1]
  li t2, 0
mul_loop7:
  beq t1, zero, end_mul7
  add t2, t2, t0
  addi t1, t1, -1
  beq zero, zero, mul_loop7
end_mul7:
  lw t0, 12(a0)       # A[1][1]
  lw t1, 12(a1)       # B[1][1]
  li t3, 0
mul_loop8:
  beq t1, zero, end_mul8
  add t3, t3, t0
  addi t1, t1, -1
  beq zero, zero, mul_loop8
end_mul8:
  add t2, t2, t3
  sw t2, 12(a2)       # C[1][1]
  # Done!
