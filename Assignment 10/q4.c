#include <stdio.h>

int main(){
    FILE *d,*s;
    s = fopen("Dip.txt","r");
    d = fopen("Dip1.txt","w");
    char ch;
    while ((ch = fgetc(s)) != EOF) {
        fputc(ch, d);
    }
    
    fclose(s);
    fclose(d);
    return 0;
}