#include <stdio.h>

int main() {
    int n, i, key, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }

    if(found) 
        printf("Element found!");
    else 
        printf("Element not found!");

    return 0;
}
