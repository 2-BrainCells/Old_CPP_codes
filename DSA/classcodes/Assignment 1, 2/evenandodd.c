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
void evenOdd(int *ptr, int n)
{
    int i = 0, j = 1;
    while ((i < j) && (j < n))
    {
        // printf("%d %d \n", i, j);
        if (ptr[j] % 2 == 0)
        {
            int temp = ptr[i];
            ptr[i] = ptr[j];
            ptr[j] = temp;
            i++;
        }
        j++;
    }
}
void displayArray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
}
int main()
{
    int *ptr, n;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    enterArray(ptr, n);
    evenOdd(ptr, n);
    displayArray(ptr, n);
    return 0;
}