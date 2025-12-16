total_sum = 0
for i in range(1, 100):
  if i % 2 == 0:
    total_sum -= i
  else:
    total_sum += i
print(total_sum)