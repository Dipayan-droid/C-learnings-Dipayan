#include <stdio.h>
int power(int *a, int *b)
{
    if (*b == 0)
        return 1;
    if (*b == 1)
        return *a;
    int x = *b - 1;
    return *a * power(a, &x);
}
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("The power is %d", power(&a, &b));
    return 0;
}