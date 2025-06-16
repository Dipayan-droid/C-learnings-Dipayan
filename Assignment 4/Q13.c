#include <stdio.h>

int main() {
    int n, i, evenCount = 0, oddCount = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++) {
        if(i % 2 == 0) 
            evenCount++;
        else 
            oddCount++;
    }

    printf("Number of elements at even positions: %d\n", evenCount);
    printf("Number of elements at odd positions: %d\n", oddCount);

    return 0;
}
