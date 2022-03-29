#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3 * n; j++)
        {
             printf("%d%d ", i , j);
        }
        printf("\n");
    }
    return 0;
}