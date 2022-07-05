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
void display(int *a[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", *(*(a + i) + j));
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
    display(a, n);
    return 0;
}