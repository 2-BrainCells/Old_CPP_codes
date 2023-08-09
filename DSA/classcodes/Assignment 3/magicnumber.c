#include <stdio.h>

void enterMatrix(int a[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the value of array = ");
            scanf("%d", &a[i][j]);
        }
    }
}
void display(int matrix[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
}
void magicSquare(int a[100][100], int n)
{
    int matrix[100][100] = {0};
    int newi = n / 2, newj = n - 1;
    // printf("%d %d", newi, newj);
    matrix[newi][newj] = a[0][0];
    for (int i = 0; i < n * n; i++)
    {
        matrix[newi][newj] = i;
        newi = newi - 1;
        newj = newj + 1;
        if (newj == n)
        {
            newj = 0;
        }
        else if (newi == -1)
        {
            newi = n - 1;
        }
        else if (a[newi][newj] != 0)
        {
            newi = newi + 1;
            newj = newj - 2;
        }
        else if (newi == -1 && newj == n)
        {
            newi == 0;
            newj = n - 2;
        }
        printf("%d %d %d %d\n", i, newi, newj);
    }
    // display(matrix, n);
}

int main()
{
    int a[100][100], n;
    printf("Enter the limit of the array (odd only)- ");
    scanf("%d", &n);
    if (n % 2 != 0)
    {
        enterMatrix(a, n);
        magicSquare(a, n);
    }
    else
        printf("Exit");
    return 0;
}