#include <stdio.h>

int main() {
    int n, i, split;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    printf("Enter split position: ");
    scanf("%d", &split);

    printf("First half: ");
    for(i = 0; i < split; i++) 
        printf("%d ", arr[i]);

    printf("\nSecond half: ");
    for(i = split; i < n; i++) 
        printf("%d ", arr[i]);

    return 0;
}
