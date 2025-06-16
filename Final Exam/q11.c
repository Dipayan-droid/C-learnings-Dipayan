#include <stdio.h>
#include <math.h>
void area(int a,int b, int c){
    int s=(a+b+c)/2.0;
    int area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is %d\n",area);
    
}
void main(){
printf("Enter the sides of triangle:\n");
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
area(a,b,c);
}