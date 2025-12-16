for num_fountain in range(51):
  for num_ballpoint in range(51):
    num_pencil = 50 - num_fountain - num_ballpoint
    if num_pencil >= 0:
      total_cost = 10 * num_fountain + 3 * num_ballpoint + 1 * num_pencil
      if total_cost == 100:
        print(f"钢笔{num_fountain}支,圆珠笔{num_ballpoint}支,铅笔{num_pencil}支")