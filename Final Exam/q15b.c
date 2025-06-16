#include <stdio.h>

int main(){
    int n,s=0;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        s=s+arr[i];
    }
    printf("Sum of the elements is %d\n",s);
    return 0;
}