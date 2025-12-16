for num in range(100, 1000):
  # 分解出百位、十位和个位
  hundreds = num // 100
  tens = (num % 100) // 10
  units = num % 10

  # 计算各位数字的立方和
  cube_sum = hundreds**3 + tens**3 + units**3

  # 判断是否为水仙花数
  if cube_sum == num:
    print(num)