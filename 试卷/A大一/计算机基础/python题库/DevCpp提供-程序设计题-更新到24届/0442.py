x = eval(input())
odd_sum = 0
for num in x:
  if num % 2 != 0:
    odd_sum += num
print(f"sum= {odd_sum}")