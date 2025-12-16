N = int(input())
s = 0.0
for i in range(1, N + 1):
    term = i / (2 * i - 1)
    if i % 2 == 0:
        s -= term
    else:
        s += term
print(f"{s:.3f}")