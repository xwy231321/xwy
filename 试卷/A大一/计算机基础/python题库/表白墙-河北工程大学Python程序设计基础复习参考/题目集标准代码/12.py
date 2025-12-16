nums = list(map(int, input().split()))
N = nums[0]
seq = nums[1:]

count = {}
for num in seq:
    count[num] = count.get(num, 0) + 1

max_num = max(count, key=lambda x: count[x])
print(f"{max_num} {count[max_num]}")