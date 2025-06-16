#include <stdio.h>

int main(){
    int n,s=0,a=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0){
        a=n%10;
        s=s+a;
        n=n/10;
    }
    printf("The sum of the digits is %d", s);
    return 0;
}