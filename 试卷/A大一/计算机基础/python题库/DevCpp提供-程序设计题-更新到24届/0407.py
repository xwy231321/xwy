def is_palindrome(number_str):
  return number_str == number_str[::-1]

while True:
  num_str = input("请输入一个四位数:")
  if len(num_str) == 4 and num_str.isdigit():
    if is_palindrome(num_str):
      print(f"{num_str} 是回文数")
    else:
      print(f"{num_str} 不是回文数")
    break
  else:
    print("输入错误，请输入一个四位数。")