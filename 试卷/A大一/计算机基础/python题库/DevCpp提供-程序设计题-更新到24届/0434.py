num_str = input()
if len(num_str) == 3 and num_str.isdigit():
  digit1 = int(num_str[0])
  digit2 = int(num_str[1])
  digit3 = int(num_str[2])
  sum_digits = digit1 + digit2 + digit3
  print(f"{digit1}+{digit2}+{digit3}={sum_digits}")
else:
  print("输入错误，请输入一个三位数的整数。")