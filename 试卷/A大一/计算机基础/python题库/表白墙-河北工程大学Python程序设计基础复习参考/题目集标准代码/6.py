N = int(input())
s = 0.0
for i in range(N):
    s += 1 / (1 + 2 * i)
print(f"sum = {s:.6f}")