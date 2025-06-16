for i in range(1, 6):
    for j in range(1, 6):
        if ((i == 1 or i == 5) and (j == 1 or j == 5)) or ((i == 2 or i == 4) and (j == 2 or j == 4)):
            print("1", end="")
        elif i == 3 and j == 3:
            print("1", end="")
        else:
            print("0", end="")
    print()