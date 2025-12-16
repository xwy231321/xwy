def factorial(n):
  if n == 0:
    return 1
  else:
    result = 1
    for i in range(1, n + 1):
      result *= i
    return result

n = int(input("请输入n:"))
fact = factorial(n)
print(f"{n} != {fact}")