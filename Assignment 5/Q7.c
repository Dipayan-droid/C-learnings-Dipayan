#include <stdio.h>
#include <string.h>
int main(){
    char str[10]="Dip\0",st[10]="Dip",x[10] = {'D', 'i','p'};
    if (strcmp(st,x)==0){
        printf("Equal\n");
    }
    else{
        printf("Not Equal\n");
    }
    return 0;
}