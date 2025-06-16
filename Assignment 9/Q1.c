#include <stdio.h>

int main()
{
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    int *ptr = &num;
    printf("The address: %p", ptr);
    return 0;
}