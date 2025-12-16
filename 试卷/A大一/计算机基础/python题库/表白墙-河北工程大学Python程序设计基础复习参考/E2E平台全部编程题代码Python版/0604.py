def niu(n):
  if n < 4:
    return 1
  else:
    return niu(n - 1) + niu(n - 3)

# 给定的函数调用部分
n = int(input("请输入 n (n >= 1): "))
print(" %d 年后小牛的个数为 %d " % (n, niu(n)))