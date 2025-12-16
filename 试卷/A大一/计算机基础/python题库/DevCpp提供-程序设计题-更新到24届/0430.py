total_sum = 0
for num in range(100, 201):
  if num % 3 != 0 and num % 7 != 0:
    total_sum += num
print(total_sum)