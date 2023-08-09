#include <stdio.h>
int main()
{
    int a[] = {7, 3};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}