#include <stdio.h>

void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void copyinrev(int a[100], int n)
{
    int b[100];
    for (int i = 0; i < n; i++)

        b[i] = a[(n - 1) - i];

    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
}
int main()
{
    int a[100], n;
    printf("Enter the size of the array = ");
    scanf("%d", &n);
    enter(a, n);
    copyinrev(a, n);
    return 0;
}