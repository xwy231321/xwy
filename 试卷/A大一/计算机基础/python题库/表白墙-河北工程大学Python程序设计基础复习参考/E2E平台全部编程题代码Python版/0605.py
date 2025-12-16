count = 0
for i in range(100):
  last_two_digits = "{:02d}".format(i)
  five_digit_number = int("147" + last_two_digits)
  if five_digit_number % 57 == 0 or five_digit_number % 67 == 0:
    print(f"5位数是: {five_digit_number}")
    count += 1

print(f"共有{count}个")