N = int(input())
scores = list(map(int, input().split()))
average = sum(scores) / N
count = sum(1 for s in scores if s >= 60)
print(f"average = {average:.1f} , count = {count}")