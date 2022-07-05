#include <stdio.h>

void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void smallandlarge(int a[100], int n)
{
    int min = a[0], max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }
    printf("The minimun and the maximum number are = %d %d", min, max);
}
int main()
{
    int a[100], n;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    enter(a, n);
    smallandlarge(a, n);
    return 0;
}
