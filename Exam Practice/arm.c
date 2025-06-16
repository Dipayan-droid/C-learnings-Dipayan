#include <stdio.h>

int main() {
    int n, temp, numDigits = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Count the number of digits
    while (temp != 0) {
        numDigits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i < numDigits; i++)
            power *= digit;
        sum += power;
        temp /= 10;
    }

    if (sum == n)
        printf("The number is an Armstrong number\n");
    else
        printf("The number is not an Armstrong number\n");

    return 0;
}
