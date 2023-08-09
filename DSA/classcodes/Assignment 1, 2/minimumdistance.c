#include <stdio.h>
#include <stdlib.h>

void enterArray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of the array = ");
        scanf("%d", &ptr[i]);
    }
}
int minDistance(int *ptr, int n, int a, int b)
{
    int i = 0, j, len = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((ptr[i] == a && ptr[j] == b || ptr[i] == b && ptr[j] == a) && len > abs(i - j))
            {
                len = abs(i - j);
            }
        }
    }
    if (len > n)
    {
        return -1;
    }
    return len;
}
int main()
{
    int *ptr, n, a, b;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    ptr = (int *)malloc(sizeof(int));
    enterArray(ptr, n);
    printf("Enter the two numbers\n");
    printf("First Number = ");
    scanf("%d", &a);
    printf("Second Number = ");
    scanf("%d", &b);
    printf("The minimum length betweeb %d and %d is = %d", a, b, minDistance(ptr, n, a, b));
    return 0;
}

// if (ptr[i] == a && ptr[i] == b)
// {
//     if (ptr[j] == a || ptr[j] == b)
//     {
//         printf("%d %d ", i, j);
//         printf("%d \n", len);
//         i = j;
//     }
//     else
//         len++;
// }