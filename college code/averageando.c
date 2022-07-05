#include <stdio.h>

void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d th student's marks ", i + 1);
        scanf("%d", &a[i]);
    }
}
void average(int a[100], int n)
{
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
        if (a[i] >= 90)
            count++;
    }
    float average = sum / 20.0;
    // printf("%d \n", sum);
    printf("The Average of the marks are = %.3f  \n", average);
    printf("The number of students scaoring above 90 is = %d", count);
}
int main()
{
    int a[100];
    enter(a, 20);
    average(a, 20);
}