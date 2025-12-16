heights = list(map(int, input().split()))
avg = sum(heights) / len(heights)
result = [str(h) for h in heights if h > avg]
print(' '.join(result))