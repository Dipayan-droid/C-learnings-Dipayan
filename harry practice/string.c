#include <stdio.h>
#include <string.h>
int main()
{    char str[] = "Dipayan";
    for (int i = 0; i <= 7; i++)
    {
        printf("%c", str[i]);
    }
    int l = strlen(str);//exluding the null character
    printf("\nThe length of the string is %d\n", l);
    return 0;
}