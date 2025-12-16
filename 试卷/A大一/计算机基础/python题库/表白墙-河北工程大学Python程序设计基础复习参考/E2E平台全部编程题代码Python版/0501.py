def mySum(x, y):
  total = 0
  for i in range(x, y + 1):
    total += i
  return total
x = int(input())
y = int(input())
sum_result = mySum(x, y)
print(sum_result)