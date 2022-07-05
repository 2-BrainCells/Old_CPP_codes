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

                if (j <= 2 * i)
                    printf("$");
                else
                    printf(" ");
            }
            if (i > 4)
            {
                if (j <= ((2 * n - 2) - i) * 2)
                    printf("$");
                else
                    printf(" ");
            }
        }
        for (int j = 2 * n - 1; j < 3 * n + 3; j++)
        {
            if (i <= 4)
            {
                if (j <= (2 * n - 1) + 2 * i)
                    printf("$");
                else
                    printf(" ");
            }
            if (i > 4)
            {
                if (j <= 3 * n - ((i - n) * 2))
                    printf("$");
                else
                    printf(" ");
            }
        }
        for (int j = 4 * n - 2; j < 5 * n + 2; j++)
        {
            if (i <= 4)
            {
                if (j <= (4 * n - 2) + 2 * i)
                    printf("$");
            }
            if (i > 4)
            {
                if (j <= (5 * n - 1) - ((i - n) * 2))
                    printf("$");
            }
        }
        printf("\n");
    }
    return 0;
}

// if (j <= (2 * i - 4 * k))
//                     printf("%d%d ", i, j);