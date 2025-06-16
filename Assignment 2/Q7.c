#include <stdio.h>

int main() {
    int n, r = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        int d = n % 10;
        r = r * 10 + d;
        n /= 10;
    }

    printf("Reversed number: %d\n", r);

    return 0;
}