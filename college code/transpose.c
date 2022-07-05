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
void transpose(int a[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}
int main()
{
    int a[100][100], n;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    enter(a, n);
    transpose(a, n);
    return 0;
}