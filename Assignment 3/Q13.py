for i in range(1, 5):
    for k in range(1, 5 - i):
        print(" ", end="")
    for j in range(1, i + 1):
        print(j, end="")
    for j in range(i - 1, 0, -1):
        print(j, end="")
    print()