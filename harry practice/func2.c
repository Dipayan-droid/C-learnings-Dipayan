#include <stdio.h>
int display(int, int);
int main()
{
    int x, y;
    printf("Enter the value of x and y\n");
    scanf("%d %d", &x, &y);
    int c = display(x, y);
    printf("The sum of x and y is %d\n", c);
    return 0;
}
int display(int a, int b)
{
    return a + b;
}
