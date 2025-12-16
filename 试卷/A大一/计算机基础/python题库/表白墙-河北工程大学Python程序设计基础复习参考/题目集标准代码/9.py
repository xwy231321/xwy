import math

a, b, c = map(int, input().split())

if a + b > c and a + c > b and b + c > a:
    s = (a + b + c) / 2
    area = math.sqrt(s * (s - a) * (s - b) * (s - c))
    perimeter = a + b + c
    print(f"area = {area:.2f}; perimeter = {perimeter:.2f}")
else:
    print("No")