#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    
    a[strcspn(a, "\n")] = '\0';

    
    strcpy(b, a);
    strrev(b); 

    printf("Reversed string: %s\n", b);

    if (strcmp(a, b) == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
