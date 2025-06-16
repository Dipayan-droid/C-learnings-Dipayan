#include <stdio.h>
int fact(int );
int fact(int n){
    if (n==1||n==0)
    return 1;
    return fact(n-1)*n;
    }
int main(){
    printf("enter the number\n");
    int n;
    scanf("%d",&n);
    printf("The factorial of %d is %d\n",n,fact(n));
    return 0;
}