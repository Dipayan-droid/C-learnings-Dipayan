#include <stdio.h>

int main()
{
    printf("Enter a string: ");
    char str[100];
    gets(str);
    int c = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        c++;
    }
    printf("The length of the string is: %d", c);
    return 0;
}