#include <stdio.h>

int main(){
    printf("Entr N:");
    int n,s=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if (i%2==0)
            s=s-i;
        else
            s=s+i;
    }
    printf("Sum is %d\n",s);
    return 0;
}