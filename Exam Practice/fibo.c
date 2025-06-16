#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n >= 1)
        printf("%d\n", a);
    if (n >= 2)
        printf("%d, ", b);

    for (int i = 2; i < n; i++)
    {
        c = a + b;
        printf("%d , ", c);
        a = b;
        b = c;
    }

    return 0;
}
