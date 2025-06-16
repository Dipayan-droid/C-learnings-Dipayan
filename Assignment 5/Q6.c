#include <stdio.h>
#include <string.h>
void main(){
    printf("Enter a string: ");
    char str[100],st[100];
    gets(str);
    printf("Enter another String: ");
    gets(st);
    strcat(str,st);
    printf("Concatenated string: ");
    puts(str);
}