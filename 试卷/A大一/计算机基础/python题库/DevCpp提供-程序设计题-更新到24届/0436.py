x = int(input())
y = int(input())
z = int(input())

numbers = [x, y, z]
numbers.sort(reverse=True)

print(f"{numbers[0]}>{numbers[1]}>{numbers[2]}")