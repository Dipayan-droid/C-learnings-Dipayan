#include <stdio.h>
void add(int a, int b){
    printf("Sum is %d\n",a+b);
}
void sub(int a, int b){
    printf("Difference is %d\n",a-b);
}   
void mul(int a, int b){
    printf("Product is %d\n",a*b);
}
void div(int a, int b){
    printf("Quotient is %d\n",a/b);
}
int main(){
    printf("Enter 1 for addition\n");
    printf("Enter 2 for subtraction\n");
    printf("Enter 3 for multiplication\n");
    printf("Enter 4 for division\n");
    int choice,a,b;
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    printf("Enter two numbers:\n");

    scanf("%d%d",&a,&b);
    switch(choice){
        case 1:
            add(a,b);
            break;
        case 2:
            sub(a,b);
            break;
        case 3:
            mul(a,b);
            break;
        case 4:
            div(a,b);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}