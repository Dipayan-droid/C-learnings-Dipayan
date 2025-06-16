#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int l = strlen(str);
    for (int i=l-1;i>=0;i--){
        printf("%c",str[i]);
    }
    printf("\n");
    printf("Rev: %s",strrev(str));
    return 0;
}