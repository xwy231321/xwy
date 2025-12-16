r = float(input())
h = float(input())
V= 1/3 * 3.14159 * r ** 2 * h
L = (r ** 2 + h ** 2) ** (1/2)
S = 3.141592 * r * L + 3.1415926 * r ** 2
print("V: %.2f"%V)
print("S: %.2f"%S)