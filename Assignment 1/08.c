#include <stdio.h>

int main(){
    int n,x,y;
    printf("Enter a number \n");
    scanf("%d",&n);
    x = (n%10)*2;
    y = (n/10)*10+x;
    printf("The Digit is:  %d",y);
    return 0;
}