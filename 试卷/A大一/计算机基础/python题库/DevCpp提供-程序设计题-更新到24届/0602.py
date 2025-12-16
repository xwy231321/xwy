def fun(n):
  if n == 0:
    return 1
  else:
    return n * fun(n - 1)

# 给定的函数调用部分
n = int(input("请输入 n (n >= 0): "))
print("%d! = %d" % (n, fun(n)))