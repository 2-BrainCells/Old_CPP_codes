#include <stdio.h>

int main()
{
    int n;
    char c = '$';
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            if (i > j || i == j)
                printf("%c ", c);
        }
        printf("\n");
    }
    return 0;
}