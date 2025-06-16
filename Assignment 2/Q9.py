
n = int(input("Enter an integer: "))
on = n
rn = 0
while n != 0:
    r = n % 10
    rn = rn * 10 + r
    n //= 10

if on == rn:
    print(on,"is a palindrome.")
else:
    print(on,"is not a palindrome.")