for num_chickens in range(31):
  num_rabbits = 30 - num_chickens
  total_legs = 2 * num_chickens + 4 * num_rabbits
  if total_legs == 90:
    print(f"{num_chickens} {num_rabbits}")
    break