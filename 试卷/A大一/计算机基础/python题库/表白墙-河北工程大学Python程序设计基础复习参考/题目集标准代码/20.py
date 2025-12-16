def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    return a * b // gcd(a, b)

M, N = map(int, input().split())
g = gcd(M, N)
l = lcm(M, N)
print(f"{g} {l}")