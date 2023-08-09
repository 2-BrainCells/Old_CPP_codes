#include <stdio.h>
void enterMatrix(int a[100][100], int b[100][100], int n, int m, int k)
{
    printf("Enter the values for the first array = ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the values for the second array = ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            scanf("%d", &b[i][j]);
        }ess
    }
}
void multiplyMatrix(int a[100][100], int b[100][100], int c[100][100], int n, int m, int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int l = 0; l < n; l++)
            {
                c[i][j] += a[i][l] * b[l][j];
            }
        }
        printf("\n");
    }
}
void display(int c[100][100], int m, int k)
{
    // printf("%d %d \n", m, k);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf("%d  ", c[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[100][100], b[100][100], c[100][100] = {0}, n, m, k;
    printf("Enter the first limit for the second array (m) = ");
    scanf("%d", &m);
    printf("Enter the common limit for the array (n) = ");
    scanf("%d", &n);
    printf("Enter the second limit for the second array (k) = ");
    scanf("%d", &k);
    enterMatrix(a, b, n, m, k);
    multiplyMatrix(a, b, c, n, m, k);
    display(c, m, k);
    return 0;
}