#include <stdio.h>

int main() {
    int n = 7; 
    for (int i = 0; i < n; i++) {
        
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++) {
            printf("%c ", ch);
        }
        
        int spaces = 2 * i - 1;
        for (int s = 0; s < spaces; s++) {
            printf("  ");
        }
        
        for (char ch = 'A' + (n - i - 1); ch >= 'A'; ch--) {
            if (i == 0 && ch == 'A' + (n - i - 1)) // Avoid duplicate character in first row
                continue;
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}
