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
void sort(int *ptr, int n)
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
    printf("The second smallest element is = %d \n", ptr[1]);
    printf("The second largest element is = %d", ptr[n - 2]);
}
int main()
{
    int *ptr, n;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    enterArray(ptr, n);
    sort(ptr, n);
    return 0;
}