#include <stdio.h>
#include <string.h>
int main(){
    char str[100];;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    int len = strlen(str);
    for (int i =0;i<len-1;i++){
        printf("%c",(char)str[i]+32);
    }
    return 0;
}