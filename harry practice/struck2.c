#include <stdio.h>
struct Student 
{
    char name[20] ;
    int marks; 
};

int main(){
    struct Student s;
    printf("Enter the name of the student: ");
    scanf("%s",s.name);
    printf("Enter the marks of the student: ");
    scanf("%d",&s.marks);
    printf("The name of the student is %s and the marks are %d\n",s.name,s.marks);    
    return 0;
}