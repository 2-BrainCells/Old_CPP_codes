#include <stdio.h>
struct student
{
    char Name[50];
    int age;
    char sex;
    int DOB;
};

void oldest(struct student s[100], int n )
{
    for (int i = 0; i < n; i++)
    {
        if (s[i].sex == 'W')
        {
            printf("The Serial Number is = %d \n", i + 1);
            printf("The Name of employee %d = %s \n", i + 1, s[i].Name);
            printf("The Age of the employee %d  = %d \n", i + 1, s[i].age);
            printf("The DOB of the employee %d = %d \n", i + 1, s[i].DOB);
        }
    }
}

int main()
{
    int i, n;
    struct student s[100];

    printf("Enter information of students:\n");
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    // storing information
    for (i = 0; i < n; ++i)
    {

        printf("\nFor age : ");
        scanf("%d", &s[i].age);
        printf("Enter first name: ");
        scanf("%s", &s[i].Name);
        printf("Enter sex: ");
        scanf("%s", &s[i].sex);
        printf("Enter DOB: ");
        scanf("%d", &s[i].DOB);
    }
    printf("Displaying Information:\n\n");
    oldest(s, n);
    // displaying information
    // for (i = 0; i < 10; ++i) {
    //     printf("\nRoll number: %d\n", i + 1);
    //     printf("First name: ");
    //     puts(s[i].Name);
    //     printf("Marks: %s", s[i].sex);
    //     printf("\n");
    //     printf("DOB: %s", s[i].DOB);
    //     printf("\n");
    // }
}