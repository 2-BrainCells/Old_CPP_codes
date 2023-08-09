#include <stdio.h>

int main()
{
    int n = 8;
    for (int i = 1; i <= n; i = i * 2)
    {
        for (int j = 1; j <= i; j++)
        { 
            printf(" %d %d \n", i, j);
        }
    }
    return 0;
}