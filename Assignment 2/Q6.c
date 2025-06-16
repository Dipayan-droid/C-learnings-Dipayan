#include <stdio.h>

int main() {
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);

    if (marks > 90) {
        printf("Grade: Ex\n");
    } else if (marks >= 80 && marks <= 89) {
        printf("Grade: A\n");
    } else if (marks >= 70 && marks <= 79) {
        printf("Grade: B\n");
    } else if (marks >= 60 && marks <= 69) {
        printf("Grade: C\n");
    } else if (marks >= 50 && marks <= 59) {
        printf("Grade: D\n");
    } else if (marks >= 35 && marks <= 49) {
        printf("Grade: P\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}