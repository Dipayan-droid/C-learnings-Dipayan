#include <stdio.h>

void splitArray(int arr[], int size) {
    int firstSize = (size + 1) / 2; // First half has extra if odd
    int secondSize = size - firstSize;

    int firstArray[firstSize], secondArray[secondSize];

    // Copy elements to the first array
    for (int i = 0; i < firstSize; i++) {
        firstArray[i] = arr[i];
    }

    // Copy elements to the second array
    for (int i = 0; i < secondSize; i++) {
        secondArray[i] = arr[firstSize + i];
    }

    // Print the first array
    printf("First array: ");
    for (int i = 0; i < firstSize; i++) {
        printf("%d ", firstArray[i]);
    }
    printf("\n");

    // Print the second array
    printf("Second array: ");
    for (int i = 0; i < secondSize; i++) {
        printf("%d ", secondArray[i]);
    }
    printf("\n");
}

int main() {
    int size;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Split and display the arrays
    splitArray(arr, size);

    return 0;
}