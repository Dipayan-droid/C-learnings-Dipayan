#include <stdio.h>
int main()
{
    int i, j, a;
    a = 0;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", 64 + a + j);
        }
        printf("\n");
        a += 1;
    }
}