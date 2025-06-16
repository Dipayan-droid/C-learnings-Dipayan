#include <stdio.h>

int main(){
    int n,x,y,a,b;
    printf("Enter a number \n");
    scanf("%d",&n);
    a = n%100;
    b = a/10;
    x = b*2;
    y = (n/100)*100+x*10+(n%10);
    printf("The Digit is:  %d",y);
    return 0;
}