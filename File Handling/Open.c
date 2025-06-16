#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("dip.txt", "r");
    int n;
    fscanf(ptr, "%d", &n);
    printf("The value of n is: %d\n", n);
    fclose(ptr);
    return 0;
}