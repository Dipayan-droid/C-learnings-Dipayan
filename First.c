#include <stdio.h>

int main(){
    int n = 12345,a,ld,sld,l,x;
    a = n/100;
    ld = n%10;
    sld = n%100;
    l = sld%10;
    x = (a*100)+(l*10)+(sld/10);
    printf("Output %d",x);
    return 0;
}