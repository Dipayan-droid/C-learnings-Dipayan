#include <stdio.h>

int main() {
    float income, tax = 0;

    printf("Enter your income: ");
    scanf("%f", &income);

    if (income < 5000) {
        tax = 0;
    } else if (income >= 5000 && income <= 6000) {
        tax = (income - 5000) * 0.10;
    } else if (income > 6000 && income <= 15000) {
        tax = 100 + (income - 6000) * 0.20;
    } else if (income > 15000) {
        tax = 1900 + (income - 15000) * 0.30;
    }

    printf("The income tax is: %.2f\n", tax);

    return 0;
}
