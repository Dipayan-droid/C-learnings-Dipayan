#include <stdio.h>

int main(){
    int x,y;
    printf("Enter the number of elements in both arrays: ");
    scanf("%d %d",&x,&y);
    int a[x], b[y], c[x+y];
    printf("Enter the elements of first array: ");
    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of second array: ");
    for(int i=0;i<y;i++){
        scanf("%d",&b[i]);
    }
    for (int i=0;i<x;i++){
        c[i]=a[i];
    }
    for (int i=x;i<(x+y);i++){
        c[x+i]=b[i];
    }

    return 0;
}