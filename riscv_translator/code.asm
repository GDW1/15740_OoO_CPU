addi x1, x2, 14
addi x2, x3, 27
add x3, x2, x1
addi x4, x3, -52
srai x4, x3, 1 
slt x5, x2, x4
sltu x6, x2, x4
lb x7, 2(x0)
addi x7, x7, 10
sb x7, 2(x0)
beq x0, x0, -3
lb x7, 2(x0)