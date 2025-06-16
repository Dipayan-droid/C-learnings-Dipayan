#include <stdio.h>

int main(){
    int a,b,sum;    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int *p1=&a, *p2=&b;
    sum = *p1 + *p2;
    printf("Sum is %d", sum);
    return 0;
}