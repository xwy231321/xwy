def mysum(lst):
  total = 0
  for num in lst:
    total += num
  return total

# 给定的函数调用部分
x = eval(input())
print(mysum(x))