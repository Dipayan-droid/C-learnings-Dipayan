#include <stdio.h>
struct Student{
    char name[100];
    int marks;
};
void main (){
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for (int i=0;i<n;i++){
        printf("Enter student name: ");
        scanf("%s", s[i].name);
        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }
    printf("You have entered:\n");
    for (int i=0;i<n;i++){
        printf("%s %d\n", s[i].name, s[i].marks);
    }
}

