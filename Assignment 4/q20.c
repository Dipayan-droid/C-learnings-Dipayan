#include <stdio.h>
#include <string.h>
//reverse a string 
int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str);
    for (int i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}