#include <stdio.h>

int main(){
    float f = 12.34,b,x;
    int a ;
    a = (int)f;
    b = f-a;
    x = (b/10)+0.1+a;
    printf("Output: %f",x);
    return 0;
}