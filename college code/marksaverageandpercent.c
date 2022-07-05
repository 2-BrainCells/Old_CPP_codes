#include <stdio.h>

float percentage(int marks1, int marks2, int marks3)
{
    float percentagee = ((marks1 + marks2 + marks3) * 100) / 300;
    return percentagee;
}
float average(int marks1, int marks2, int marks3)
{
    float averagee = (marks1 + marks2 + marks3) / 3;
    return averagee;
}
int main()
{
    int m1, m2, m3;
    printf("Enter the first marks = ");
    scanf("%d", &m1);
    printf("Enter the first marks = ");
    scanf("%d", &m2);
    printf("Enter the first marks = ");
    scanf("%d", &m3);
    printf("The average of these marks are = %.3f \n", average(m1, m2, m3));
    printf("The percentage of these marks are = %.3f", percentage(m1, m2, m3));
    return 0;
}