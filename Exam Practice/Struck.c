#include <stdio.h>
#include <string.h>
struct Student
{
    char name[20];
    int roll;
    float marks;
};
int main()
{
    struct Student s1;

    // Assigning values to structure members
    strcpy(s1.name, "John");
    s1.roll = 101;
    s1.marks = 85.5;

    // Printing values
    printf("Student Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}