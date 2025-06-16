#include<stdio.h>

int main()

{

float num,res,fraction;

int floating_fd;

printf("Enter the floating-point number:\n");

scanf("%f",&num);

res=num-(int)num;

fraction=res*10;

floating_fd=(int)fraction;

printf("The first digit of the fractional part is:%d\n",floating_fd);

}