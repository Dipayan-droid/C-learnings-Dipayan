#include <stdio.h>
int sum(int x,int y,int z){
    return x+y+z;
}
int main(){
    printf("Enter three numbers:");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("Sum :%d",sum(a,b,c));
    return 0;
}