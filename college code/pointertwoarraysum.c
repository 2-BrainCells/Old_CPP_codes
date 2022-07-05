#include <stdio.h>

int main()
{
    int a[] = {1, 3, 4, 6};
    int b[] = {1, 3, 8, 6};
    int *c = a;
    int *d = b;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 4; i++)
    {
        sum1 = sum1 + c[i];
    }
    for (int i = 0; i < 4; i++)
    {
        sum2 = sum2 + d[i];
    }
    if (sum1 == sum2)
        printf("The arrays have same SUM");
    if (sum1 > sum2)
        return 1;
    // printf("The first sum is larger");
    if (sum1 < sum2)
        return 2;
    // printf("The second dum is largest");
    return 0;
}