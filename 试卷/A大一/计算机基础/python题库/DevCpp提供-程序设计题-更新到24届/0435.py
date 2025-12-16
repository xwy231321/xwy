x = float(input("请输入x坐标:"))
y = float(input("请输入y坐标:"))

if x == 0 and y == 0:
  print("位于原点")
elif y == 0:
  print("位于x轴")
elif x == 0:
  print("位于y轴")
elif x > 0 and y > 0:
  print("位于第一象限")
elif x < 0 and y > 0:
  print("位于第二象限")
elif x < 0 and y < 0:
  print("位于第三象限")
elif x > 0 and y < 0:
  print("位于第四象限")