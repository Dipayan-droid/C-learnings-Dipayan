#include <stdio.h>

int main() {
    int n;
    printf("Enter the N: ");
    scanf("%d", &n);

    char start;
    for (int i = 0; i < n; i++) {
        start = 'A' + 2 * i; 
        
        for (int j = 0; j < n - i; j++) {
            printf("%c", start + j);
        }

        printf("\n");
    }

    return 0;
}
