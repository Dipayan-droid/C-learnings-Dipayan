#include <stdio.h>

int main(){
    int a= 123,b = 456,na,nb,la,lb,x;
    na = a/10;
    la = a%10;
    nb = b/10;
    lb = b%10;
    x = ((na*10)+lb)*((nb*10)+la);
    printf("Output %d",x);
    return 0;
}