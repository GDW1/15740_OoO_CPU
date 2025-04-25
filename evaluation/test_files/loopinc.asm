#Written by ChatGPT
  li t0, 0        # Value to increment
  li t1, 100      # Loop counter

loop:
  addi t0, t0, 1  # Increment value
  addi t1, t1, -1 # Decrement counter
  bne t1, zero, loop
