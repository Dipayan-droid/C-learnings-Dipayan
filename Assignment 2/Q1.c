#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    float area,s;
    printf("Enter the sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle is: %f", area);
    return 0;
}