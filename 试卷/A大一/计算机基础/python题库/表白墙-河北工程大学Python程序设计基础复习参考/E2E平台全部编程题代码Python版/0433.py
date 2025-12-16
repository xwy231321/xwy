pre_tax_salary = float(input())

if pre_tax_salary > 5000:
  tax_rate = 0.03
elif pre_tax_salary <= 3000:
  tax_rate = 0
else:
  tax_rate = 0.01

tax_amount = pre_tax_salary * tax_rate
after_tax_salary = pre_tax_salary - tax_amount

print(after_tax_salary)