#include <stdio.h>
void fibo(int n){
    int a=0,b=1,c;
    printf("Fibonacci Series: ");
    for (int i=0;i<n;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}
int main(){
    printf("Enter the range: ");
    int n;
    scanf("%d",&n);
    fibo(n);
    return 0;
}