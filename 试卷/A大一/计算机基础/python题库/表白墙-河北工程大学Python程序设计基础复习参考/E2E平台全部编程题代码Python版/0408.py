initial_height = float(input("请输入球落下的高度:"))

total_distance = initial_height
rebound_height = initial_height

for _ in range(9):
  rebound_height /= 2
  total_distance += 2 * rebound_height

tenth_rebound_height = rebound_height / 2

print('共经过距离%f米' % total_distance)
print('第10次反弹%f米' % tenth_rebound_height)