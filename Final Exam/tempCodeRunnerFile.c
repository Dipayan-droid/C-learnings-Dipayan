#include <stdio.h>
int fact (int *a ){
    if (*a==0||*a==1)
        return 1;
    int t= *a-1;
    returnfact(*a)*fact(&t);
}
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("The factorial is %d",fact(&n));
    return 0;
}