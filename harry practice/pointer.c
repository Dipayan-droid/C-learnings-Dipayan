#include <stdio.h>

int main()
{
    int i = 72, k = 69;
    int *j = &i;
    printf("The value of i is %d\n", i);
    printf("The address  of i is %p\n", &i);
    printf("The value of i is %p\n", j);
    printf("The address of k is %p\n", &k);
    printf("The value of adress j is %d\n", *(&i));
    return 0;
}