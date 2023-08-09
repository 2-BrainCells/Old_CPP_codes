#include <stdio.h>
#include <stdlib.h>
void enterArray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of the array = ");
        scanf("%d", ptr + i);
    }
}
void sortArray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ptr[i] < ptr[j])
            {
                int temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
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
    printf("Enter the limit of the array - ");
    scanf("%d", &n);
    ptr = (int *)malloc(sizeof(int));
    enterArray(ptr, n);
    sortArray(ptr, n);
    displayArray(ptr, n);
    return 0;
}