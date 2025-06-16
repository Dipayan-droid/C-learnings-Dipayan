#include <stdio.h>
int isArmstrong(int num) {
    int originalNum = num, sum = 0, digits = 0;    
    while (originalNum != 0) { 
        digits++;
        originalNum /= 10;
    }
    originalNum = num;  
    while (originalNum != 0) {
        int digit = originalNum % 10;
        int power = 1;        
        for (int i = 0; i < digits; i++)  
            power *= digit;        
        sum += power;
        originalNum /= 10;
    }    
    return (sum == num);
}
int main() {
    int num;    
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}
