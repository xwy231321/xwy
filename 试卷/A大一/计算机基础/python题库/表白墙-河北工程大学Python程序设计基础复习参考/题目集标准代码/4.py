electricity = float(input())
if electricity < 0:
    print("Invalid Value!")
else:
    if electricity <= 50:
        cost = electricity * 0.53
    else:
        cost = 50 * 0.53 + (electricity - 50) * (0.53 + 0.05)
    print(f"cost = {cost:.2f}")