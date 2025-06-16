#include <stdio.h>
    int main() {
        int range;
        printf("Enter the range: ");
        scanf("%d", &range);
       int a = 0, b = 1, next;
        if (range >= 0) {
            printf("%d ", a);
        }
        if (range >= 1) {
            printf("%d ", b);
        }
        next = a + b;
        while (next <= range) {
            printf("%d ", next);
            a = b;
            b = next;
            next = a + b;
        }
        printf("\n");

        return 0;
    }
