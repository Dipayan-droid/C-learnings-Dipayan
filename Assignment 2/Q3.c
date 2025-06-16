#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c ;
    printf("Enter the sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a*a==sqrt(b*b+c*c) || b*b==sqrt(a*a+c*c) || c*c==sqrt(a*a+b*b)){
        printf("The triangle is a right angled triangle");
    }
    else{
        printf("The triangle is not a right angled triangle");
    }
    return 0;
}