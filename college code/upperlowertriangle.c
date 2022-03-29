#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = 0; j < 2 * n - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if (i == j || i > j)
                printf("%d ", i + 1);
        }
        printf("\n");
    }
    printf("%d", n);
    for (int i = 2 * n - 1; i < 0; i--)
    {

        for (int j = 2 * n - 1; j < 0; j--)
        {
            printf(" ");
        }
        for (int j = 2 * n - 1; j < 0; j--)
        {
            if (i + j < 9)
                printf("%d ", i + 1);
        }
        printf("\n");
    }
    return 0;
}