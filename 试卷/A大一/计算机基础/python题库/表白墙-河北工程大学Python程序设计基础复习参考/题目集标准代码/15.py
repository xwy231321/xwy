s = input()
count = 0
for c in s:
    if c.isupper() and c not in 'AEIOU':
        count += 1
print(count)