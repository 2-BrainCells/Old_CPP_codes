#include <stdio.h>

struct Employee
{
    char name[100];
    char address[100];
    int age;
    int salary;
};
void enter(struct Employee e1[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of employee %d  = ", i + 1);
        scanf("%s", &e1[i].name);
        printf("Enter the adress of the employee %d = ", i + 1);
        scanf("%s", &e1[i].address);
        printf("Enter the age of the employee %d= ", i + 1);
        scanf("%d", &e1[i].age);
        printf("Enter the salary of the salary %d = ", i + 1);
        scanf("%d", &e1[i].salary);
    }
}
void display(struct Employee e1[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The name of employee %d = ", i + 1);
        puts(e1[i].name);
        printf("Enter the adress of the employee %d ", i + 1);
        puts(e1[i].address);
        printf("Enter the age of the employee %d is = %d  \n", i + 1, e1[i].age);
        printf("Enter the salary of the employee %d is = %d  \n", i + 1, e1[i].salary);
    }
}
int main()
{
    struct Employee e1[100], *ptr;
    int n;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    ptr = &e1;
    enter(ptr, n);
    display(ptr, n);
    return 0;
}