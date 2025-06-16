#include <stdio.h>
int powe(int x,int y){
    if (y==0){
        return 1;
    }
    else{
        return x*powe(x,y-1);
    }
}
int main(){
    printf("Enter X and Y: ");
    int x,y;
    scanf("%d %d",&x,&y);
    printf("Solution: %d",powe(x,y));
    return 0;
}