#include <stdio.h>

int main(){
    int a,b,temp;
    printf("Enter two numbers: ");
    scanf("%d %d ",&a,&b);
    int *p1=&a,*p2=&b;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("The value of a is %d and the value of b is %d\n", a, b);
    return 0;
}