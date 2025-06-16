#include <stdio.h>

int main(){
    printf("Enter your name:  ");
    char name[100];
    gets(name);
    printf("Your name: ");
    puts(name);
    return 0;
}