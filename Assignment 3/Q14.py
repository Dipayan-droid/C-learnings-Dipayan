
for i in range(5):
    fact1 = 1
    for x in range(1, i + 1):
        fact1 *= x
    for space in range(4 - i):
        print(" ", end="")
    for j in range(i + 1):
        fact2 = 1
        for y in range(1, j + 1):
            fact2 *= y
        fact3 = 1
        for z in range(1, i - j + 1):
            fact3 *= z
        num = fact1 // (fact2 * fact3)
        print(f" {num}", end="")
    print()
