#include <stdio.h>

int main(){
    int n,s=0;
    printf("Enter dimension: ");
    scanf("%d",&n);
    int arr[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<n;i++){
        s = s+arr[i][i];
    }
    printf("Sum of diagonal elements: %d\n",s);
    return 0;
}