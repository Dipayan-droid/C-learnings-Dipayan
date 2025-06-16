r = int(input("Enter the range: "))

a, b = 0, 1
if r >= 0:
    print(a, end=" ")
if r >= 1:
    print(b, end=" ")

n = a + b
while n <= r:
    print(n, end=" ")
    a, b = b, n
    n = a + b

print()