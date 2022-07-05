#include <stdio.h>

struct employee
{
    char name[100];
    int age;
    char sex;
    int dob;
};

void enter(struct employee e1[10], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of employee %d = ", i + 1);
        scanf("%s", &e1[i].name);
        printf("Enter the age of the employee %d = ", i + 1);
        scanf("%d", &e1[i].age);
        printf("Enter the sex of the employee %d = ", i + 1);
        scanf("%s", &e1[i].sex);
        printf("Enter the dob of the employee %d = ", i + 1);
        scanf("%d", &e1[i].dob);
    }
}

void oldest(struct employee e1[10], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (e1[i].sex == 'W')
        {
        printf("The Serial Number is = %d \n" ,i +1 );
        printf("The Name of employee %d = %s \n", i + 1 , e1[i].name);
        printf("The Age of the employee %d  = %d \n", i + 1 , e1[i].age);
        printf("The DOB of the employee %d = %d \n", i + 1, e1[i].dob);  
        }
    }
}

int main()
{
    struct employee e1[10];
    int n;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    enter(e1, n);
    oldest(e1, n);
    return 0;
}
