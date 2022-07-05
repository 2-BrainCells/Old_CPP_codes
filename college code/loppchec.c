#include <stdio.h>

int main()
{
    // for (int i = 0, j = 5; j >= 0;)
    // {
    //     if (i <= 4)
    //     {
    //         printf("%d", i);
    //         i++;
    //     }
    //     if (i > 4)
    //     {
    //         printf("%d", j);
    //         j--;
    //     }
    // }
    int n = 5;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0, k = 2 * n - 1; k >= 0;)
        {
            if ( j <= 2 * i)
            {
                printf("%d%d ", i, j);
                j++;
            }
        }
    }
    return 0;
}