// #include <stdio.h>
// #include <string.h>
// struct date
// {
//     int day;
//     int month;
//     int year;
// };
// struct employee
// {
//     char name[20];
//     int salary;
//     struct date dob;
//     struct date doj;
// };
// void getData(struct employee e[100], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the Name of the employee = ");
//         scanf("%s", &e[i].name);
//         printf("Enter the salary of the employee = ");
//         scanf("%d", &e[i].salary);
//         printf("Enter the date of birth the employee = ");
//         scanf("%d %d %d", &e[i].dob.day, &e[i].dob.month, &e[i].dob.year);
//         printf("Enter the date of joining the employee = ");
//         scanf("%d %d %d", &e[i].doj.day, &e[i].doj.month, &e[i].doj.year);
//     }
// }
// // void sortName(struct employee e[100], int n)
// // {
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = 0; j < n; j++)
// //         {
// //             if (strcmp(e[j].name, e[j + 1].name) > 0)
// //             {
// //                 struct employee temp = e[j];
// //                 e[j] = e[j + 1];
// //                 e[j + 1] = temp;
// //             }
// //         }
// //     }
// // }
// void sortSal(struct employee e[100], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (e[j].salary < e[j + 1].salary)
//             {
//                 struct employee temp = e[j];
//                 e[j] = e[j + 1];
//                 e[j + 1] = temp;
//             }
//         }
//     }
// }
// void display(struct employee e[100], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The Name of the employee = %s\n", e[i].name);
//         printf("The salary of the employee= %d\n", e[i].salary);
//         printf("The date of birth the employee = %d %d %d\n", e[i].dob.day, e[i].dob.month, e[i].dob.year);
//         printf("The date of joining the employee = %d %d %d\n", e[i].doj.day, e[i].doj.month, e[i].doj.year);
//     }
// }
// int main()
// {
//     struct employee e[100];
//     int n;
//     printf("Enter the limit of the array = ");
//     scanf("%d", &n);
//     getData(e, n);
//     // sortName(e, n);
//     sortSal(e, n);
//     display(e, n);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct date
{
    int day;
    int month;
    int year;
};
struct employee
{
    char name[20];
    struct date dob;
    struct date doj;
    int salary;
};
int main()
{
    int i, j, n;
    struct employee e[20], t, k;
    printf("Enter the no. of employees : ");
    scanf("%d", &n);
    printf("\nEnter employee details :-\n");
    for (i = 0; i < n; i++)
    {
        printf("\n%d)Name : ", i + 1);
        scanf("%s", e[i].name);
        printf(" Date of Birth : ");
        scanf("%d %d %d", &e[i].dob.day, &e[i].dob.month, &e[i].dob.year);
        printf(" Date of Joining : ");
        scanf("%d %d %d", &e[i].doj.day, &e[i].doj.month, &e[i].doj.year);
        printf(" Salary : ");
        scanf("%d", &e[i].salary);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(e[j].name, e[j + 1].name) > 0)
            {
                k = e[j];
                e[j] = e[j + 1];
                e[j + 1] = k;
            }
        }
    }

    // display the sorted array
    printf("\nArranged alphabetically: \n");
    printf("S.N\tNAME\tDATE OF BIRTH\tJOINING DATE\tSALARY\n");
    for (i = 0; i < n; i++)
    {
        printf("%d)\t%s\t%d\\%d\\%d\t%d\\%d\\%d\t%d\n", i + 1, e[i].name, e[i].dob.day, e[i].dob.month, e[i].dob.year, e[i].doj.day, e[i].doj.month, e[i].doj.year, e[i].salary);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (e[j].dob.year < e[j + 1].dob.year)
            {
                k = e[j];
                e[j] = e[j + 1];
                e[j + 1] = k;
            }
            else if (e[j].dob.year == e[j + 1].dob.year)
            {
                if (e[j].dob.month < e[j + 1].dob.month)
                {
                    k = e[j];
                    e[j] = e[j + 1];
                    e[j + 1] = k;
                }
                else if (e[j].dob.day < e[j + 1].dob.day)
                {
                    k = e[j];
                    e[j] = e[j + 1];
                    e[j + 1] = k;
                }
            }
        }
    }

    printf("\nArranged on the basis of Date of Birth: \n");
    printf("S.N\tNAME\tDATE OF BIRTH\tJOINING DATE\tSALARY\n");
    for (i = 0; i < n; i++)
    {
        printf("%d)\t%s\t%d\\%d\\%d\t%d\\%d\\%d\t%d\n", i + 1, e[i].name, e[i].dob.day, e[i].dob.month, e[i].dob.year, e[i].doj.day, e[i].doj.month, e[i].doj.year, e[i].salary);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (e[j].doj.year < e[j + 1].doj.year)
            {
                k = e[j];
                e[j] = e[j + 1];
                e[j + 1] = k;
            }
            else if (e[j].doj.year == e[j + 1].doj.year)
            {
                if (e[j].doj.month < e[j + 1].doj.month)
                {
                    k = e[j];
                    e[j] = e[j + 1];
                    e[j + 1] = k;
                }
                else if (e[j].doj.day < e[j + 1].doj.day)
                {
                    k = e[j];
                    e[j] = e[j + 1];
                    e[j + 1] = k;
                }
            }
        }
    }

    printf("\nArranged on the basis of Joining Date: \n");
    printf("S.N\tNAME\tDATE OF BIRTH\tJOINING DATE\tSALARY\n");
    for (i = 0; i < n; i++)
    {
        printf("%d)\t%s\t%d\\%d\\%d\t%d\\%d\\%d\t%d\n", i + 1, e[i].name, e[i].dob.day, e[i].dob.month, e[i].dob.year, e[i].doj.day, e[i].doj.month, e[i].doj.year, e[i].salary);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (e[j].salary < e[j + 1].salary)
            {
                k = e[j];
                e[j] = e[j + 1];
                e[j + 1] = k;
            }
        }
    }

    printf("\nArranged on the basis of Salary: \n");
    printf("S.N\tNAME\tDATE OF BIRTH\tJOINING DATE\tSALARY\n");
    for (i = 0; i < n; i++)
    {
        printf("%d)\t%s\t%d\\%d\\%d\t%d\\%d\\%d\t%d\n", i + 1, e[i].name, e[i].dob.day, e[i].dob.month, e[i].dob.year, e[i].doj.day, e[i].doj.month, e[i].doj.year, e[i].salary);
    }
}