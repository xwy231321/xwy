N = int(input())
monkeys = list(range(1, N + 1))
idx = 0
while len(monkeys) > 1:
    idx = (idx + 2) % len(monkeys)
    monkeys.pop(idx)
print(monkeys[0])