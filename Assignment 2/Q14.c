#include <stdio.h>

int main()
{
    int x, y;
    printf("ENter the value of X:");
    scanf("%d", &x);
    switch (x)
    {
    case 6:
        y = x + 10;
        break;
    case 7:
        y = x * x;
        break;
    case 12:
        y = 2 * x + 4;
        break;
    default:
        y = x * (6 - 1);
    }
    printf("The value of Y is: %d", y);
    return 0;
}