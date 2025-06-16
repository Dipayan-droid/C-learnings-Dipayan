#include <stdio.h>
void main(){
    FILE *ptr;
    ptr = fopen("hehe.txt","w+");
    fprintf(ptr,"THis is Dipayan Mandal");
    fclose(ptr);
}