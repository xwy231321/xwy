def remove_odd(lst):
  even_numbers =[]
  for num in lst:
    if num % 2 == 0:
      even_numbers.append(num)
  return even_numbers

# 给定的函数调用部分
L = eval(input())
L1 = remove_odd(L)
print(*L1)