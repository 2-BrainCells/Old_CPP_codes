#include <stdio.h>

int main()
{
    int n;
    char c = 'S';
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j < 7)
                printf("%c", c);
            else
                printf(" ");
        }
        for (int j = n; j < 2 * n; j++)
        {
            if (i + j < 14)
                printf("%c", c);
            else
                printf(" ");
        }
        for (int j = 2 * n; j < 3 * n; j++)
        {
            if (i + j < 21)
                printf("%c", c);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}