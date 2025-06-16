#include <stdio.h>
int main()
{
    int i, j, fact1 = 1, fact2, fact3, k, space, num;
    for (i = 0; i <= 4; i++)
    {
        if (i == 0)
            fact1 = 1;
        else
            fact1 *= i;
        for (space = 1; space <= 4 - i; space++)
        {
            printf(" ");
        }
        fact2 = 1;
        for (j = 0; j <= i; j++)
        {
            if (j == 0)
                fact2 = 1;
            else
                fact2 *= j;
            fact3 = 1;
            if (i != j)
                for (k = i - j; k >= 1; k--)
                {
                    fact3 *= k;
                }
            else
                fact3 *= 1;
            num = fact1 / fact2 / fact3;
            printf(" %d", num);
        }
        printf("\n");
    }
}