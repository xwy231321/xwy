from math import pi
def getCirAndArea(r):
  circumference = 2 * pi * r
  area = pi * r**2
  return circumference, area

# 给定的函数调用部分
r = float(input("请输入圆的半径: "))

cir, area = getCirAndArea(r)

print("周长 为 %.2f , 面积 为 %.2f " % (cir, area))