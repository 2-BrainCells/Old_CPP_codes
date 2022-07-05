#include <stdio.h>

int sum(int *a[])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = *a[i];
    }
    return sum;
}
int main()
{
    int a[] = {1, 2, 4, 5, 6};
    sum(a);
    return 0;
}