#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int num = 100, j;
    for (int i = 2; i <= num; i++)
    {
        bool flag = true;
        for (int j = 2; j < i; j++)
        {
            //printf("%d ", i);
            if (i % j == 0)
            {
                flag = false;
            }
        }
        if (flag == true)
            printf("%d ", i);
    }
    return 0;
}