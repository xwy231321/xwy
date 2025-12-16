N = input().strip()
digit_count = len(N)
digit_sum = sum(int(d) for d in N)
print(f"{digit_count} {digit_sum}")