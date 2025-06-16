#include <stdio.h>

void fibonacci(int *n) {
    int a = 0, b = 1, next;
    int *ptr1 = &a, *ptr2 = &b, *ptr3;
    
    printf("Fibonacci Series: %d %d ", *ptr1, *ptr2);
    
    for (int i = 2; i < *n; i++) {
        next = *ptr1 + *ptr2;
        printf("%d ", next);
        
        *ptr1 = *ptr2;
        *ptr2 = next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the range: ");
    scanf("%d", &n);
    
    fibonacci(&n);
    return 0;
}
