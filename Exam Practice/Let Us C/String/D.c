#include <stdio.h>

int main(){
    printf("Enter a string: ");
    char str[100];
    gets(str);
    printf("Enter position: ");
    int pos;
    scanf("%d",&pos);
    printf("%s\n", &str[pos]);
    return 0;
}
