#include <stdio.h>

int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=i;j<=n;j++)
        printf("%c",i+64);
        printf("\n");
        printf("\n");
    }
    
    return 0;
}