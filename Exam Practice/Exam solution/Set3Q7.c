#include <stdio.h>

// Function to find and print prime factors
void primeFactors(int num) {
    printf("Prime factors of %d are: ", num);
    
    // Print the number of 2s that divide num
    while (num % 2 == 0) {
        printf("2 ");
        num /= 2;
    }
    
    // num must be odd at this point, check for odd factors
    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }
    
    // If num is a prime number greater than 2, print it
    if (num > 1) {
        printf("%d", num);
    }
    printf("\n");
}

int main() {
    int num;
    
    // Taking user input
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }
    
    primeFactors(num);
    
    return 0;
}