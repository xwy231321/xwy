import ast

input_str = input()
try:
  numbers = ast.literal_eval(input_str)
  if isinstance(numbers, list) and all(isinstance(num, int) for num in numbers):
    filtered_numbers = [num for num in numbers if num % 3 != 0]
    sum_of_filtered = sum(filtered_numbers)
    print(sum_of_filtered)
  else:
    print("输入格式错误，请输入一个整数列表，例如：[1,2,3]")
except (SyntaxError, ValueError):
  print("输入格式错误，请输入一个整数列表，例如：[1,2,3]")