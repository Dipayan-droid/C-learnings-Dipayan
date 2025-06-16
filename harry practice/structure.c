#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int rollno;
    float marks;
};
int main()
{
    struct student e1, e2;
    strcpy(e1.name, "Dipayan");
    e1.rollno = 101;
    e1.marks = 99.5;
    printf("Name: %s\n", e1.name);
    printf("Roll No: %d\n", e1.rollno);
    printf("Marks: %.2f\n", e1.marks);
    return 0;
}