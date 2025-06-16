#include <stdio.h>
struct Student{
    char name[100];
    int marks;
};
int main(){
    struct Student s1;
    printf("Enter student name: ");
    gets(s1.name);
    printf("Enter marks:");
    scanf("%d",&s1.marks);
    printf("You have entered: %s %d", s1.name, s1.marks);
    return 0;
}