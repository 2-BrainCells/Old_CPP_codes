#include <stdio.h>

int main()
{

    printf("ε,");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("a");
        }
        printf(",");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("b");
        }
        printf(",");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("a");
        }
        printf("b,");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("a");
            printf("b");
        }
        printf(",");
    }

    return 0;
}
