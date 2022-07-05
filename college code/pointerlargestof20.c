#include <stdio.h>

int enter(int a[100])
{
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &a[i]);
    }
}
void largest(int a[100])
{
    int max = a[0];
    for (int i = 0; i < 20; i++)
    {

        if (a[i] % 2 != 0)
        {
            if (max < a[i])
                max = a[i];
        }
    }
    printf("The largest number = %d\n", max);
}
void smallest(int a[100])
{
    int min = a[0];
    for (int i = 0; i < 20; i++)
    {
        if (a[i] % 2 != 0)
        {
            if (min > a[i])
                min = a[i];
        }
    }
    printf("The smallest number = %d\n", min);
}
int main()
{
    int a[100];
    int *b = a;
    enter(a);
    largest(b);
    smallest(b);
    return 0;
}