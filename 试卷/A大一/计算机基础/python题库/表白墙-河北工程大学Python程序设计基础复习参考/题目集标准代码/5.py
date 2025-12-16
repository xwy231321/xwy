a, n = map(int, input().split())
total = 0
term = 0
for _ in range(n):
    term = term * 10 + a
    total += term
print(f"s = {total}")