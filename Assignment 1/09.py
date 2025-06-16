n = int(input("Enter a number: "))
a = n%100
b = a//10
x = b*2
y = (n//100)*100+x*10+(n%10)
print("The Digit: ", y)
