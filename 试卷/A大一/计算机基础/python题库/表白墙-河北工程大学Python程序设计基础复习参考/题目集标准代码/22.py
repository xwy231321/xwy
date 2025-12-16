n = int(input())
a, b = 1, 1
while b <= n:
    a, b = b, a + b
print(b)