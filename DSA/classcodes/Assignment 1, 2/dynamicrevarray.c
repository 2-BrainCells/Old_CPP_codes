#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number =  ");
        scanf("%d", &ptr[i]);
    }
    for (int i = 0, j = n - 1; i < n, j >= 0; i++, j--)
    {
        int temp = ptr[i];
        ptr[i] = ptr[j];
        ptr[j] = temp;
        printf("%d %d %d %d %d \n", i, j, ptr[i], ptr[j], temp);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", *(ptr + i));
    }
    return 0;
}