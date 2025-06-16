#include <stdio.h>
//Write a Program to print the summation of digits of user given input number.
int main(){
    int n,s=0,a=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0){
        a = n%10;
        s = s+a;
        n = n/10;
    }
    printf("Sum of digits is %d",s);
    return 0;
}