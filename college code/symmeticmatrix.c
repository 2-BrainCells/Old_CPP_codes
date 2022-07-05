#include <stdio.h>

void enter(int a[100][100])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void addsymmetric(int a[100][100], int b[100][100])
{
    int c[100][100], d[100][100], flag = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf(c[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            d[i][j] = c[j][i];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (d[i][j] == c[j][i])
                flag = 1;
        }
    }
    if (flag == 1)

        printf("The matrix is symmetric");

    else
        printf("The matrix is not symmetric");
}
int main()
{
    int a[100][100], b[100][100];
    enter(a);
    enter(b);
    addsymmetric(a, b);
    return 0;
}