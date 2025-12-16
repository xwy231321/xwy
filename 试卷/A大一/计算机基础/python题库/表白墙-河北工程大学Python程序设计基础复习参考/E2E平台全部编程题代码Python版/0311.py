n = int(input("请输入一个三位数的整数:"))
a = n % 10
b = n // 10 % 10
c = n // 100
print(f'百位:{c}')
print(f'十位:{b}')
print(f'个位:{a}')