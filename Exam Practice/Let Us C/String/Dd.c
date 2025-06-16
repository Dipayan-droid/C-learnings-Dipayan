#include <stdio.h>

int main(){
    printf("Enter a string: ");
    char str[100];
    gets(str);
    printf("Enter position: ");
    int pos,c=1;
    scanf("%d",&pos);
    for (int i=pos-1;c<=pos;i++){
        printf("%c",str[i]);
        c++;
    }
    return 0;
}