#include <stdio.h>

int main()
{
    int age, marks;
    printf("Enter the age of student = ");
    scanf("%d", &age);
    printf("Enter the marks of student = ");
    scanf("%d", &marks);
    if (age < 50)
        marks = marks + 60;
    else
        marks = marks + 40;
    printf("The marks of the student is =  %d", marks);    
}