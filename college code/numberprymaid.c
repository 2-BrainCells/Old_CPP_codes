#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if (i <= 4)
            {
                if (j >= (n - 1) - i && j <= (n - 1) + i)

                    printf("%d", i + 1);
                else
                    printf(" ");
            }
            if (i > 4)
            {
                if (j >= i - (n - 1) && j <= i + (n - 1) - 2 * (i - (n - 1)))
                    printf("%d", (n - 1) - (i - n));
                else
                    printf(" ");
            }
        }
        for (int j = 2 * n - 1; j < 4 * n - 2; j++)
        {
            if (i <= 4)
            {
                if (j >= (3 * n - 2) - i && j <= (3 * n - 2) + i)
                    printf("%d", i + 1);
                else
                    printf(" ");
            }
            if (i > 4)
            {
                if (j >= 2 * n + i - n  && j <= 3 * n  + ((n + 1) - i))
                    printf("%d", (n - 1) - (i - n));
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}