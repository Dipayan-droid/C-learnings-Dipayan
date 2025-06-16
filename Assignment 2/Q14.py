x = int(input("Enter the value of X: "))

if x == 6:
    y = x + 10
elif x == 7:
    y = x * x
elif x == 12:
    y = 2 * x + 4
else:
    y = x * (6 - 1)

print(f"The value of Y is: {y}")