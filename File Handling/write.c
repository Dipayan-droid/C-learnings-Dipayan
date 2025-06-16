#include <stdio.h>

int main(){
    FILE *f;
    f = fopen("dip2.txt", "w");
    fprintf(f, "This is a file created by Dipayan");
    fclose(f);
    return 0;
}