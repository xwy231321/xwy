for num_roosters in range(20):
  for num_hens in range(34):
    num_chicks = 100 - num_roosters - num_hens
    if num_chicks >= 0 and num_chicks % 3 == 0:
      total_cost = 5 * num_roosters + 3 * num_hens + num_chicks // 3
      if total_cost == 100:
        print(f"公鸡{num_roosters},母鸡{num_hens},小鸡{num_chicks}")