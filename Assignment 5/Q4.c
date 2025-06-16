#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int l = strlen(str);
    printf("Length of the string: %d",l); 
    return 0;
}