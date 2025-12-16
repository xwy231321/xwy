import math
a = eval(input("请输入a:"))
b = eval(input("请输入b:"))
c = eval(input("请输入c:"))
if(pow(b,2) - 4 * a * c < 0):
    print("无实根")
else:
    res1 = (-b + (b ** 2 - 4 * a * c) ** (0.5) ) / (2 * a)
    res2 = (-b - (b ** 2 - 4 * a * c) ** (0.5) ) / (2 * a)
    print(f"两个实根分别为: {res1} {res2}")