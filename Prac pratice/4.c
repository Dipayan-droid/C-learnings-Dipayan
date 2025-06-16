#include <stdio.h>
// Write a Program to find all the Fibonacci numbers for a given range
int main(){
    int n;
    printf("Enter the range: ");
    scanf("%d", &n);
    int a = 0, b = 1, c=a+b;
    printf("Fibonacci numbers are: ");
    printf("%d %d ", a, b);
    while(c<=n){
        printf("%d ", c);
        a = b;
        b = c;
        c = a+b;
    }
    printf("\n");
    return 0;
}