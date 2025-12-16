import ast

input_str = input("请输入一组整数:")
try:
  numbers = ast.literal_eval(input_str)
  if isinstance(numbers, list) and all(isinstance(num, int) for num in numbers):
    if not numbers:
      print("输入的列表为空。")
    else:
      sum_of_numbers = sum(numbers)
      average = sum_of_numbers / len(numbers)
      print(f"和为: {sum_of_numbers}")
      print(f"平均值为: {average}")
  else:
    print("输入格式错误，请输入一个整数列表，例如：[1,2,3]")
except (SyntaxError, ValueError):
  print("输入格式错误，请输入一个整数列表，例如：[1,2,3]")