import math

N = int(input())
if N < 2:
    print("No")
else:
    for i in range(2, int(math.isqrt(N)) + 1):
        if N % i == 0:
            print("No")
            break
    else:
        print("Yes")