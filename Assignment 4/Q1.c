#include <stdio.h>

int main(){
    int arr1[100], n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) 
    scanf("%d", &arr1[i]);
    printf("Array elements: ");
    for (i = 0; i < n; i++) 
    printf("%d ", arr1[i]);
    return 0;
}