lst = eval(input())
seen = set()
result = []
for num in lst:
    if num not in seen:
        seen.add(num)
        result.append(num)
print('[{}]'.format(' '.join(map(str, result))))