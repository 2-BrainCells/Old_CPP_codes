#include <stdio.h>

struct student
{
    char name[100];
    int rollNumber;
    int marks[5];
    int totalMarks;
    char grade;
};
void getData(struct student s[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Name of the student = ");
        scanf("%s", &s[i].name);
        printf("Enter the Roll Number of the student = ");
        scanf("%d", &s[i].rollNumber);
        printf("Enter the marks of the student\n");
        for (int j = 0; j < 5; j++)
        {
            printf("Enter the marks for %d sub ", j + 1);
            scanf("%d", &s[i].marks[j]);
        }
    }
}
void totalAndGrade(struct student s[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            s[i].totalMarks = s[i].totalMarks + s[i].marks[j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        s[i].totalMarks = s[i].totalMarks / 5;
        if (s[i].totalMarks <= 100 && s[i].totalMarks > 90)
            s[i].grade = 'A';
        else if (s[i].totalMarks <= 90 && s[i].totalMarks > 80)
            s[i].grade = 'B';
        else if (s[i].totalMarks <= 80 && s[i].totalMarks > 70)
            s[i].grade = 'C';
        else if (s[i].totalMarks <= 70 && s[i].totalMarks > 60)
            s[i].grade = 'D';
        else if (s[i].totalMarks <= 60 && s[i].totalMarks > 50)
            s[i].grade = 'E';
        else
            s[i].grade = 'F';
    }
}
void sortTotalMarks(struct student s[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[j].totalMarks > s[j + 1].totalMarks)
            {
                struct student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}
void display(struct student s[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The Name of the student = %s\n", s[i].name);
        printf("The Roll Number of the student = %d\n", s[i].rollNumber);
        printf("The marks of the student\n");
        for (int j = 0; j < 5; j++)
        {
            printf("The marks for %d sub is = %d\n", j + 1, s[i].marks[j]);
        }
        printf("The total Marks of the student is = %d\n", s[i].totalMarks);
        printf("The Grade of the student is = %c\n", s[i].grade);
    }
    printf("\n");
}
int main()
{
    struct student s[100];
    int n;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    getData(s, n);
    totalAndGrade(s, n);
    sortTotalMarks(s, n);
    display(s, n);
    return 0;
}