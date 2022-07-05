#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, row, col;
    printf("Enter the limit of the array = ");
    scanf("%d %d", &row, &col);
    printf("Enter the value of the array \n");
    ptr = (int *)malloc(row * col * sizeof(int));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ptr[i * col + j]);
        }
    }
    int fc, sum = 0;
    scanf("%d", &fc);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum = sum + ptr[i * col + j];
        }
    }

    printf("The sum of the numbers is %d ", sum);
    
    free(ptr);
    return 0;
}
