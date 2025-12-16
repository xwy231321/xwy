x = [49, 38, 65, 76, 13, 27]
sum_even_positions = 0
for i in range(0, len(x), 2):
  sum_even_positions += x[i]
print(sum_even_positions)