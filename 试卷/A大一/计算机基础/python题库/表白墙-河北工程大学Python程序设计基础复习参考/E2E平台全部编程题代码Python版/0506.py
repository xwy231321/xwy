import math
def f(n):
  total_sum = 0
  for i in range(1, n + 1):
    total_sum += math.factorial(i)
  return total_sum

# 给定的函数调用部分
n = eval(input("input n (n > 2): "))
print("1! + ... + %d! = %d" % (n, f(n)))