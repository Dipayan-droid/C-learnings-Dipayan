#include <stdio.h>

// Program to find all prime numbers within a given range
int main() {
    int n;
    printf("Enter the range: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are: ", n);
    for (int i = 2; i <= n; i++) {
        int f = 0;
        for (int j = 2; j <= i / 2; j++) {  // Only check up to i/2 for efficiency
            if (i % j == 0) {
                f = 1;  // Not a prime if divisible
                break;
            }
        }
        if (f == 0) {  // If no divisors found, it's prime
            printf("%d, ", i);
        }
    }

    printf("\n");
    return 0;
}
