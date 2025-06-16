#include <stdio.h>
void main(){
    int n;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    int arr[n];
    int *ptr = arr;
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    printf("The elements of the array are:\n");
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
}