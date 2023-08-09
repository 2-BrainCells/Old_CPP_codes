#include <stdio.h>
#include <stdlib.h>

void enterArray(int *ptr, int n)
{
    for (int i = 0; i < n * n; i++)
    {
        printf("Enter the value of %d element = ", i);
        scanf("%d", &ptr[i]);
    }
}
void nonZero(int *ptr, int n)
{
    int count = 0;
    for (int i = 0; i < n * n; i++)
    {
        if (ptr[i] == 0)
        {
            count++;
        }
    }
    printf("The total number of Non Zero elements are = %d", count);
    printf("\n");
}
void upperTriangle(int *ptr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                sum = sum + ptr[i * n + j];
            }
        }
    }
    printf("The sum of the elements above leading triangle are = %d", sum);
    printf("\n");
}
void elementsBelow(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > j)
            {
                printf("%d ", ptr[i * n + j]);
            }
        }
    }
    printf("\n");
}
void diagonalProduct(int *ptr, int n)
{
    int multiply = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == j) || (i + j == n - 1))
            {

                multiply = multiply * ptr[i * n + j];
            }
        }
    }
    printf("The multiplication of the diagonal elements is = %d", multiply);
}
int main()
{
    int *ptr, n;
    printf("Enter the size of the array = ");
    scanf("%d", &n);
    ptr = (int *)malloc((n * n) * sizeof(int));
    enterArray(ptr, n);
    nonZero(ptr, n);
    upperTriangle(ptr, n);
    elementsBelow(ptr, n);
    diagonalProduct(ptr, n);
    // displayArray(ptr, n);
    return 0;
}