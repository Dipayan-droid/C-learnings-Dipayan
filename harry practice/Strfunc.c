#include <stdio.h>
#include <string.h>
int main(){
    printf("Enter the string\n");
    char str[100];
    gets(str);
    printf("Enter another String: ");
    char str2[100];
    gets(str2);
    strcat(str,str2);
    puts(str);
       return 0;
}