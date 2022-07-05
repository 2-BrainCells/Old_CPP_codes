#include <stdio.h>

void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void arrayrev(int a[100], int n)
{
    int last = n - 1;
    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j <= n / 2, last >= n / 2; j++, last--)
            {
                int temp = a[j];
                a[j] = a[last];
                a[last] = temp;
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    if (n % 2 != 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j <= n / 2, last >= n / 2; j++, last--)
            {
                int temp = a[j];
                a[j] = a[last];
                a[last] = temp;
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
}
int main()
{
    int a[100], n;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    enter(a, n);
    arrayrev(a, n);
    return 0;
}