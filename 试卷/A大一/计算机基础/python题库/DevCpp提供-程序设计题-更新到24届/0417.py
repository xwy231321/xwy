current_population = 30000
target_population = 35000
growth_rate = 0.005  # 0.5%
years = 0

while current_population <= target_population:
  current_population *= (1 + growth_rate)
  years += 1

print(years)