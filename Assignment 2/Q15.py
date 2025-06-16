X = int(input("Enter three integers X, Y, and Z: "))
Y = int(input())
Z = int(input())

if X == 0:
    print("Result:", Y + Z)
elif X == 1:
    print("Result:", Y - Z)
elif X == 2:
    print("Result:", Y * Z)
elif X == 3:
    if Z != 0:
        print("Result:", Y // Z)
    else:
        print("Error: Division by zero is not allowed.")
else:
    print("Error")