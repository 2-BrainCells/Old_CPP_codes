#include <stdio.h>
#include <stdlib.h>

void enter(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of the array = ");
        scanf("%d", ptr + i);
    }
}
int maximum(int *ptr, int n)
{
    int max = ptr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < ptr[i])
        {
            max = ptr[i];
        }
    }
    return max;
}
void nextGreatestNumber(int *ptr, int n, int max)
{
    int i = 0, NGE, new[n];
    for (int j = 1; j < n; j++)
    {
        int count = 1;
        if (ptr[i] < ptr[j])
        {
            NGE = ptr[j];
            printf("%d %d %d\n", i, j, NGE);
            i = j;
            if (ptr[j] == max)
            {
                NGE = -1;
            }
            printf("%d \n", count);
            for (int k = 0; k < count; k++)
            {
                new[k] = NGE;
            }
        }
        else
        {
            printf("%d\n", NGE);
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", new[i]);
    }
}

int main()
{
    int *ptr, n, max;
    printf("Enter the limit of the array - ");
    scanf("%d", &n);
    ptr = (int *)malloc(sizeof(int));
    enter(ptr, n);
    max = maximum(ptr, n);
    nextGreatestNumber(ptr, n, max);
    return 0;
}

// int i = 0, NGE = ptr[0];
// for (int j = 0; j < n; j++)
// {
//     while (ptr[i] < ptr[j])
//     {
//         ptr[i] = ptr[j];
//         NGE = ptr[j];
//         printf("%d ", NGE);
//         if (ptr[j] == max)
//         {
//             NGE = -1;
//             printf("%d", NGE);
//         }
//         j++;
//     }
// }