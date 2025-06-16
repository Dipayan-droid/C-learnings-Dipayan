#include <stdio.h>
void fibo(int *n){
    int a =0,b=1,c;
    int *p=&a,*q=&b,*r;
    printf("%d %d ",*p,*q);
    for (int i=2;i<*n;i++){
        c = *p+*q;
        printf("%d ",c);
        *p=*q;
        *q=c;

    }
}
int main(){
    int n;
    printf("Enter the range: ");
    scanf("%d", &n);
    fibo(&n);
    return 0;
}