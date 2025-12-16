def fibo(n):
  if n <= 0:
    return 0
  elif n == 1:
    return 1
  else:
    a, b = 1, 1
    for _ in range(3, n + 1):
      a, b = b, a + b
    return b

# 给定的函数调用部分
n = int(input("请输入 n (n >= 1): "))
for i in range(1, n + 1):
  print(fibo(i), end=' ')