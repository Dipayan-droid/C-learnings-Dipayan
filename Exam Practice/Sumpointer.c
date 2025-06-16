#include <stdio.h>

int main(){
    int a,b;
    printf("ENter two numbers: ");
    scanf("%d %d",&a, &b);
    int *p1=&a,*p2=&b;
    int sum = *p1+*p2;
    printf("Sum is %d",sum);
    return 0;
}