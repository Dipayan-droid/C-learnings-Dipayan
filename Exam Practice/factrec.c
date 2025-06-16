#include <stdio.h>
int fact(int x){
    if (x==0){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
    }

int main(){
    printf("Enter number to find factorial: ");
    int n;
    scanf("%d",&n);
    printf("Factorial: %d",fact(n));
    return 0;
}