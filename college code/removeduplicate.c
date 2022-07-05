#include <stdio.h>

void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void removingelemets(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (a[i] == a[j])
                    a[j] = 0;     
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
    printf("Enter the size of the array = ");
    scanf("%d", &n);
    enter(a, n);
    removingelemets(a, n);
    return 0;
}