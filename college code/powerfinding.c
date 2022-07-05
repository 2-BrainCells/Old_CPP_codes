#include <stdio.h>

int findpower = 1;
int power(int a, int n)
{
    if (n > 0)
    {
        findpower = findpower * a;
        // printf("%d", findpower);
        //printf("%d", n);
        power(a, n = n - 1);
    }
    return findpower;
}
int main()
{
    int a, n;
    printf("Enter the number and the power to be found ");
    scanf("%d %d", &a, &n);
    printf("%d", power(a, n));
}