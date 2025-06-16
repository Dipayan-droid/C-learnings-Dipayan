arr1 = []
n = int(input("Enter size of array: "))
print("Enter elements: ")
for i in range(n):
    element = int(input())
    arr1.append(element)
print("Array elements: ", end="")
for i in range(n):
    print(arr1[i], end=" ")
