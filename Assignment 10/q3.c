#include <stdio.h>

int main(){
    FILE *fp;
    char ch[100];
    fp = fopen("Dip.txt","w");
    printf("Enter a string: ");
    gets(ch);
    fprintf(fp,"%s",ch);
    fclose(fp);
    return 0;
}