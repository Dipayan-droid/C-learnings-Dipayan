#include <stdio.h>

int main(){
    float f = 12.534,x,y;
    int a,b,c;
    a = (int)f;
    x = f-a;
    y = x*10;
    c = (int)y;
    printf("%d",c);
}