#include <stdio.h>

int main(){
    int n,x,a;
    printf("Enter a number \n");
    scanf("%d",&n);
    a = n%100;
    x = (a/10)+a%10;
    printf("The Digit is:  %d",x);
    return 0;
}