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
    printf("Enterno to factorial: ");
    int x;
    scanf("%d",&x);
    printf("Factorial: %d",fact(x));
    return 0;
}