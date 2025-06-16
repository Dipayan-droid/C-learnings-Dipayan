#include <stdio.h>
int powe(int x,int y){
    if (y==0){
        return 1;}
    else{
        return x*powe(x,y-1);
    }
}
int main(){
    int x,y;
    printf("Enter X and Y:");
    scanf("%d %d",&x,&y);
    printf("Ans: %d",powe(x,y));
    return 0;
}