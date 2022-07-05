#include<stdio.h>

void enter(int a[100][100])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void multiply(int a[100][100])
{
    int k;
    printf("Enter the number to be multiplied = ");
    scanf("%d", &k);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", k * a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[100][100];
    enter(a);
    multiply(a);
    return 0;
}