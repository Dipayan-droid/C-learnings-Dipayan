#include <stdio.h>

int main() {
    int X, Y, Z;
    
    printf("Enter three integers X, Y, and Z: ");
    scanf("%d %d %d", &X, &Y, &Z);
    
    switch (X) {
        case 0:
            printf("Result: %d\n", Y + Z);
            break;
        case 1:
            printf("Result: %d\n", Y - Z);
            break;
        case 2:
            printf("Result: %d\n", Y * Z);
            break;
        case 3:
            if (Z != 0) {
                printf("Result: %d\n", Y / Z);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error\n");
            break;
    }
    
    return 0;
}
