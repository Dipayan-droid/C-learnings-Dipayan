#include <stdio.h>
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a=0,b=0,c=n;
    while(n>0){
        a = n%10;
        b = b*10+a;
        n = n/10;
    }
    if (b==c){
        printf("The number is a palindrome");
    }
    else{
        printf("The number is not a palindrome");
    }
}