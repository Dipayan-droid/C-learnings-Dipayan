n = int(input("Enter the N: "))

for i in range(n):
    start = chr(65 + 2 * i)  # 65 is the ASCII value of 'A'
    
    for j in range(n - i):
        print(chr(ord(start) + j), end="")
    
    print()