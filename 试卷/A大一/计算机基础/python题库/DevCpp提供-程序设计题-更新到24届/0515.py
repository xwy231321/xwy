def sum(x, y):
  total_sum = 0
  for i in range(x, y + 1):
    total_sum += i
  return total_sum

# 给定的函数调用部分
x = int(input("请输入一个正整数 x: "))
y = int(input("请输入一个正整数 y: "))
print(sum(x, y))