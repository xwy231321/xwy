def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5)+1):
        if num % i == 0:
            return False
    return True

M, N = map(int, input().split())
count = 0
total = 0
for i in range(M, N+1):
    if is_prime(i):
        count += 1
        total += i
print(f"{count} {total}")