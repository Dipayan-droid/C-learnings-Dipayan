//Write a Program to reverse the digits of an integer.
#include <stdio.h>
void main(){
    int n,a=0,b=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (n>0){
        a = n%10;
        b = b*10+a;
        n = n/10;    
    }
    printf("The reverse of the number is: %d",b);
}