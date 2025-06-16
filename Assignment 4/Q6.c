#include <stdio.h>

int main()
{
    int arr1[100], n, i, smallest, largest;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr1[i]);
    smallest = largest = arr1[0];
    for (i = 1; i < n; i++)
    {
        if (arr1[i] < smallest)
            smallest = arr1[i];
        if (arr1[i] > largest)
            largest = arr1[i];
    }
    printf("Smallest: %d, Largest: %d", smallest, largest);
    return 0;
}