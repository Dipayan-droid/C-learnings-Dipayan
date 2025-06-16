#include <stdio.h>
#include <string.h>
int main(){
    char str[100],c[100];
    printf("Enter a string: ");
    gets(str);
    strcpy(c,str);
    printf("Copied string: ");
    puts(c);
    return 0;
}