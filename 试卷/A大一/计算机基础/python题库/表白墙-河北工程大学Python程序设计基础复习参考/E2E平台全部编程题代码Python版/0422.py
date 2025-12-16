def is_prime(n):
  if n < 2:
    return False
  for i in range(2, int(n**0.5) + 1):
    if n % i == 0:
      return False
  return True

while True:
  num = int(input("输入正整数,0为结束:"))
  if num == 0:
    break
  if num > 0:
    if is_prime(num):
      print(f"{num} 是素数")
    else:
      print(f"{num} 不是素数")
  else:
    print("请输入正整数。")