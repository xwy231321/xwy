def sum(n):
  total_sum = 0
  for i in range(1, n + 1, 2):
    total_sum += 1 / i
  return total_sum

# 给定的函数调用部分
n = int(input("请输入一个奇数: "))
print(sum(n))