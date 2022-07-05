#include <stdio.h>

struct Employee
{
    char name[100];
    char address[100];
    int age;
    int salary;
};
int main()
{
    struct Employee e1[100];
    int n;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of employee %d  = ", i + 1);
        scanf("%s", &e1[i].name);
        printf("Enter the adress of the employee %d = ", i + 1);
        scanf("%s", &e1[i].address);
        printf("Enter the age of the employee %d= ", i + 1);
        scanf("%d", &e1[i].age);
        printf("Enter the age of the salary %d", i + 1);
        scanf("%d", &e1[i].salary);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + e1[i].salary;
    }
    float avg = sum / n;
    printf("The avargae salary of the salary is %.3f = ", avg);
    return 0;
}