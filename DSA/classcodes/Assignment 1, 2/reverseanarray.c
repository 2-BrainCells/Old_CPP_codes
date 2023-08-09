#include <stdio.h>
#include <stdlib.h>

void enterArray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements of the array = ");
        scanf("%d", &ptr[i]);
    }
}
void revArray(int *ptr, int n)
{
    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        int temp;
        temp = ptr[i];
        ptr[i] = ptr[j];
        ptr[j] = temp;
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
    revArray(ptr, n);
    displayArray(ptr, n);
    return 0;
}