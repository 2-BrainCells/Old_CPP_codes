#include <stdio.h>

#include <stdio.h>

void enter(int a[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void adding(int a[100][100], int n)
{
    int b[100];
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + *(*(a + i) + j);
        }
        b[i] = sum;
    }
    int *c = b;
    for (int i = 0; i < n; i++)
    {
        printf("The sum of rows when i is %d is turned out to be %d \n ", i, *(c + i));
    }
}
void display(int a[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[100][100], n;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    int *b = a;
    enter(a, n);
    adding(a, n);
    display(a, n);
    return 0;
}