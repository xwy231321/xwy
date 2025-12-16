def peach(n):
  peaches = 1
  for _ in range(n - 1):
    peaches = (peaches + 1) * 2
  return peaches

# 给定的函数调用部分
n = int(input("请输入 n (n >= 2): "))
print("第一天的桃子数为:", peach(n))