char = input().strip()
s = input().strip()

index = s.rfind(char)
if index != -1:
    print(f"index = {index}")
else:
    print("Not Found")