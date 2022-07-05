#include <stdio.h>

void enter(int a[100])
{
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &a[i]);
    }
}
void check(int a[100])
{
    int neg = 0, pos = 0, xero = 0;
    for (int i = 0; i < 20; i++)
    {
        if (a[i] < 0)
            neg++;
        if (a[i] > 0)
            pos++;
        if (a[i] == 0)
            xero++;
    }
    printf("The number of positive numbers are = %d \n", pos);
    printf("The number of negative numbers are = %d \n", neg);
    printf("The number of zeros are = %d",xero);
}
int main()
{
    int a[100];
    enter(a);
    check(a);
    return 0;
}