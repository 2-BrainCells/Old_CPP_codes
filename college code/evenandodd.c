#include <stdio.h>

void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void oddandeven(int a[100], int n)
{
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
            odd++;
        else
            even++;
    }
    printf("The Number of odd elements are = %d \n", odd);
    printf("The Number of even elements are = %d", even);
}
int main()
{
    int a[100], n;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    enter(a, n);
    oddandeven(a, n);
}