#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int c=n,a=0,b=0;
    while (n>0){
        a=n%10;
        int f = 1;
        for (int i=1;i<=a;i++){
            f = f*i;
        }
        b = b+f;
        n = n/10;
    }
    if (b==c){
        printf("The number is Krishnamurthy");
    }
    else{
        printf("The number is not Krishnamurthy");
    }
    return 0;
}