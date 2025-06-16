#include <stdio.h>

int main(){
    int n,x,a;
    printf("Enter a number \n");
    scanf("%d",&n);
    x = n%100;
    a = x/10;
    printf("The Digit is:  %d",a);
    return 0;
}