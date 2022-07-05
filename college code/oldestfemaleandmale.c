#include <stdio.h>

struct employee
{
    char name[100];
    int age;
    char sex;
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
    }
}

void oldest(struct employee e1[10], int n)
{
    int maxm = 0, maxw = 0;
    for (int i = 0; i < n; i++)
    {
        if (maxm < e1[i].age && e1[i].sex == 'M')

            maxm = e1[i].age;

        if (maxw < e1[i].age && e1[i].sex == 'W')

            maxw = e1[i].age;
    }
    printf("The oldest male employee has age = %d \n", maxm);
    printf("The oldest female employee has age = %d", maxw);
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
