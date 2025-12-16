weight = 50.0
growth_rate = 0.02

for year in range(1, 11):
  weight *= (1 + growth_rate)
  print(f"{year} years later:{weight:.2f}")