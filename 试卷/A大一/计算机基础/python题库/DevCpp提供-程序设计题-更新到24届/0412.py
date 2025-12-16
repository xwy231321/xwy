s = 0
n = 0
while True:
  n += 2
  if s + n > 100:
    break
  s += n
print(n - 2)