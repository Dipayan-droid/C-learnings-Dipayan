#include <stdio.h>

int main(){
    FILE *fp;
    char ch;
    fp = fopen("Dip.txt","r");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    return 0;
}