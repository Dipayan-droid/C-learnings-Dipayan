#include <stdio.h>
//Write a Program to check whether a given number is Palindrome or not.
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int c=n,a=0,r=0;
    while (n>0){
        a = n%10;
        r = r*10+a;
        n = n/10;
    }
    if (c==r){
        printf("The number is a palindrome number.");
    }
    else{
        printf("The number is not a palindrome number.");
    }
    return 0;
}