#include <stdio.h>
int fact (int *n ){
    if (*n==0||*n==1)
        return 1;
    int t= *n-1;
    return (*n)*fact(&t);
}
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("The factorial is %d",fact(&n));
    return 0;
}