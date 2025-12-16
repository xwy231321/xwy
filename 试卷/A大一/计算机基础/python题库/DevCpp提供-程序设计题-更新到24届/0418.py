import math

e_approx = 1.0
factorial_n = 1
n = 1
term = 1.0

while abs(term) >= 1e-6:
  factorial_n *= n
  term = 1.0 / factorial_n
  e_approx += term
  n += 1

print(e_approx)