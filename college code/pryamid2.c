#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if((i == j || i > j)&&(i + j < 9))
            printf("%d%d ", i ,j);
        }
        printf("\n");
    }
    return 0;
}