#include <stdio.h>

int main(){
    int n,s=0;
    printf("Enter the N: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0;i<n;i++){
        s=s+arr[i];
    }
    printf("The sum of the average of the array is %d",s/n);
    return 0;
}