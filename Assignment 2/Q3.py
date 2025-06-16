import math
print("Enter the sides of Triangle")
a = int(input())
b = int(input())
c = int(input())

if (a**2 == math.sqrt(b**2 + c**2) or 
    b**2 == math.sqrt(a**2 + c**2) or 
    c**2 == math.sqrt(a**2 + b**2)):
    print("The triangle is a right angled triangle")
else:
    print("The triangle is not a right angled triangle")
