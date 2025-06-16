#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];int *ptr = arr;
    for (int i=0; i<n; i++){
        printf("Enter the element: ");
        scanf("%d", ptr+i);
    }
    for (int i=0; i<n; i++){
        printf("%d ", *(ptr+i));
    }
    return 0;
}