#include <stdio.h>

int main(){
    int c,f=0;
    printf("Enter temperature in Fahrenheit:\n");
    scanf("%d",&f);
     c=(f-32)*5/9;
    printf("Temperature in Celsius is %d\n",c);
    return 0;
}