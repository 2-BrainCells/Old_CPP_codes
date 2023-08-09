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
        printf("Enter the value of the array = ");
        scanf("%d", ptr + i);
    }
    int numFind;
    printf("Enter the value to be found = ");
    scanf("%d", &numFind);
    for (int i = 0; i < n; i++)
    {
        if (numFind == ptr[i])
        {
            printf("The number is found at = %d", i + 1);
        }
    }
    return 0;
}