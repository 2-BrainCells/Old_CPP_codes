#include <stdio.h>

void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number= ");
        scanf("%d", &a[i]);
    }
}
void findMaxMin(int a[100], int n)
{
    int max = a[0], min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
        if (min > a[i])
        {
            min = a[i];
        }
    }
    printf("The Maximum and the Minimum lab are = %d and %d repc.", max, min);
}
int main()
{
    int a[100], n;
    printf("Enter the limit of the array= ");
    scanf("%d", &n);
    enter(a, n);
    findMaxMin(a, n);
    return 0;
}