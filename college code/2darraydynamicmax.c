#include <stdio.h>
#include <stdlib.h>

void enter(int *ptr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ptr[i * col + j]);
        }
    }
}
int search(int *ptr, int row, int col)
{
    int max = ptr[0 + 0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (max < ptr[i * col + j])
                max = ptr[i * col + j];
        }
    }
    return (max);
}
void shifting(int *ptr, int row, int col)
{
    int temp;
    for (int i = 0; i < row; i--)
    {
        for (int j = 0; j < col; j--)
        {
            temp = ptr[row + col];
            ptr[row + col] = ptr[row-- + col--];
            ptr[row-- + col--] = temp;
        }
    }
}

void stroingat0(int *ptr, int row, int col, int max)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (max == ptr[i * col + j])
            {
                shifting(ptr, i * col, j);
                break;
            }
        }
    }
}
void display(int *ptr, int row, int col)
{
    for(int i = 0; i < row ; i++)
    {
        for(int j = 0 ; j < col; j++)
        {
            printf("%d ",ptr[i * col + j]);  
        }
        printf("\n");
    }
}
int main()
{
    int *ptr, row, col;
    int max;
    printf("Enter the limit of the array = ");
    scanf("%d %d", &row, &col);
    printf("Enter the value of the array \n");
    ptr = (int *)malloc(row * col * sizeof(int));
    enter(ptr, row, col);
    max = search(ptr, row, col);
    printf("The maximum number is = %d", max);
    printf("\n");
    stroingat0(ptr, row, col, max);
    display(ptr, row, col);
    return 0;
}