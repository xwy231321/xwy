def find_factor(a):
  factors = []
  for i in range(1, a + 1):
    if a % i == 0:
      factors.append(i)
  print(",".join(map(str, factors)))

# 给定的函数调用部分
a = int(input("请输入整数 a: "))
find_factor(a)