#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int isPeterson(int num) {
    int originalNum = num, sum = 0;
 
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return (sum == originalNum); 
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPeterson(num)) {
        printf("%d is a Peterson number.\n", num);
    } else {
        printf("%d is not a Peterson number.\n", num);
    }

    return 0;
}
