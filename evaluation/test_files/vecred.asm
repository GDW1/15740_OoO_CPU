addi  a1, x0, 22
addi  t0, x0, 0
addi  t1, x0, 0
beq   t0, a1, 6
add   t3, a0, t0
lw    t4, 0(t3)
add   t1, t1, t4
addi  t0, t0, 1
beq   x0, x0, -5
sw    t1, 0(a0)