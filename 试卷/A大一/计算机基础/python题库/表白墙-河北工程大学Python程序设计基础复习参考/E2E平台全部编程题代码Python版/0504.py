def istriangle(a, b, c):
  if a + b > c and a + c > b and b + c > a:
    return "yes"
  else:
    return "no"

# 给定的函数调用部分
a = float(input("请输入边长 a: "))
b = float(input("请输入边长 b: "))
c = float(input("请输入边长 c: "))

print(istriangle(a, b, c))