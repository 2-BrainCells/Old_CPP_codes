#include <stdio.h>

int main()
{
    int a[] = {1, 3, 4, 6};
    int b[] = {1, 3, 6, 6};
    int *c = a;
    int *d = b;
    int point;
    printf("Specify the starting point other than 0 = ");
    scanf("%d", &point);
    int sum1 = 0, sum2 = 0;
    for (int i = point; i < 4; i++)
    {
        sum1 = sum1 + c[i];
    }
    for (int i = point; i < 4; i++)
    {
        sum2 = sum2 + d[i];
    }
    if (sum1 == sum2)
        return 0;
    if (sum1 > sum2)
        return 1;
    if (sum1 < sum2)
        return 2;
    return 0;
}