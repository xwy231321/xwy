x = eval(input("Please input x:"))
y = 0
if(x < 0):
    y = 0
elif(x < 5):
    y = x * 1.0
elif(x < 10):
    y = 3.0 * x - 5
elif(x < 20):
    y = 0.5 * x - 2
else:
    y = 0
print(y)