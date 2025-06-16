#include <stdio.h>
void fact(int *f,int n){
    for (int i=1;i<=n;i++){
        *f = *f*i;
    }
    printf("Factorial:%d",*f);
}
int main(){
    printf("Enter a number: ");
    int f=1,n;
    scanf("%d", &n);
    fact(&f,n);
    return 0;
}