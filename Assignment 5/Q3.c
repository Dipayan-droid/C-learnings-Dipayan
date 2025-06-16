#include <stdio.h>
#include <string.h>
int main(){
    char str[100],rev[100]="\0";
    printf("Enter a string: ");
    gets(str);
    int l = strlen(str);
    for (int i=l-1;i>=0;i--){
        rev[l-i-1]=str[i];
    }
    puts(rev);
    if (strcmp(str,rev)==0){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    return 0;
}