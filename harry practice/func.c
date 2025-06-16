#include <stdio.h>

int dip(int a,int b){
    return a+b;
}
int main(){
    printf("ENter a and b\n");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("The sum of a and b is %d\n",dip(a,b));
    return 0;
}