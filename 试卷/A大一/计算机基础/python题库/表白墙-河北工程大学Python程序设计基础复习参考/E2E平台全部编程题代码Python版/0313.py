n = int(input())  # 获取整数个数 n
numbers = []  # 创建一个空列表用于存储整数

for _ in range(n):  # 循环 n 次
    num = int(input())  # 获取输入的整数
    numbers.append(num)  # 将整数添加到列表中

total_sum = sum(numbers)  # 计算列表元素的总和

print(total_sum)  # 输出总和