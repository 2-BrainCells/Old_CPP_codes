#include <stdio.h>

void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void sorting(int a[100], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp = a[j];
            if (a[j + 1] < temp)
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int a[100], n;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    enter(a, n);
    sorting(a, n);
    return 0;
}