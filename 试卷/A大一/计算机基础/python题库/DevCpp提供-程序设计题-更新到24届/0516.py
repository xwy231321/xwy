def odd(x):
  if x % 2 != 0:
    return "Yes!"
  else:
    return "No!"

# 给定的函数调用部分
x = int(input("请输入一个正整数 x: "))
print(odd(x))