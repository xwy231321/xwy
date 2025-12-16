from itertools import permutations

li = [1, 2, 3, 4, 5, 6, 7, 8, 8]
unique_numbers = set()

for pair in permutations(li, 2):  # 生成所有可能的两位数
    unique_numbers.add(pair[0] * 10 + pair[1])  # 形成两位数并加入集合

print(len(unique_numbers) - 1)  # 计算唯一的两位数个数
