#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the value of the array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + ptr[i];
    }
    printf("The Sum of the numbers are = %d", sum);
    free(ptr);
}