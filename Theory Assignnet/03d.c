#include <stdio.h>
#include <math.h>

int main() {
    double p, r, n, q, a;
    for (int i = 0; i < 10; i++) {
        printf("Enter the principal (p), annual interest rate (r), number of years (n), and number of times interest is compounded per year (q) for set %d:\n", i + 1);
        scanf("%lf %lf %lf %lf", &p, &r, &n, &q);
        a = p * pow((1 + r / (q * 100)), n * q);
        printf("The compounded amount (a) for set %d is: %.2lf\n", i + 1, a);
    }
    return 0;
}