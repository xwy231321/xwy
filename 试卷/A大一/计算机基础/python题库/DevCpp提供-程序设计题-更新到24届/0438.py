secret_number = 7

while True:
  try:
    guess = int(input("请输入你猜的数(0~9):"))
    if guess < 0 or guess > 9:
      print("请输入0到9之间的整数。")
    elif guess > secret_number:
      print("太大")
    elif guess < secret_number:
      print("太小")
    else:
      print("恭喜！你猜中了！")
      break
  except ValueError:
    print("输入错误，请输入一个整数。")