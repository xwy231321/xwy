n = int(input())
sum_of_odd_multiples_of_5 = 0
for i in range(1, n + 1):
  if i % 2 != 0 and i % 5 == 0:
    sum_of_odd_multiples_of_5 += i
print(sum_of_odd_multiples_of_5)