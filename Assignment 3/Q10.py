for i in range(1, 6):
    for j in range(1, i + 1):
        print(chr(64 + 2 * j - 1), end="")
    print()