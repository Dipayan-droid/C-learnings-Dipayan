#include <stdio.h>
#include <string.h>
int main(){
    printf("Enter a string: ");
    char str[100];
    gets(str);
    int v=0;
    for (int i=0;i<strlen(str);i++){
        if (strchr("AEIOUaeiou", str[i]))
            v++;
    }
    printf("Number of vowels: %d",v);
    return 0;
}