numerator1 = 2
denominator1 = 1
numerator2 = 3
denominator2 = 2

total_sum = numerator1 / denominator1 + numerator2 / denominator2

for _ in range(18):
  next_numerator = numerator1 + numerator2
  next_denominator = denominator1 + denominator2
  total_sum += next_numerator / next_denominator
  numerator1 = numerator2
  denominator1 = denominator2
  numerator2 = next_numerator
  denominator2 = next_denominator

print(f"{total_sum:.2f}")