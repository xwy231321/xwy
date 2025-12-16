start_number = int(input("请报数(50以内):"))
end_number = 50

for i in range(start_number, end_number + 1):
  if '7' in str(i) or i % 7 == 0:
    print("过", end=" ")
  else:
    print(i, end=" ")