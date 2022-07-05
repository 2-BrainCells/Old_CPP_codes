#include<stdio.h>

void enter(int a[100][100])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void max(int a[100][100])
{
    int max = a[0][0];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
            }
        }
    }
    printf("The maximum number = %d", max);
}
int main()
{
    int a[100][100];
    enter(a);
    max(a);
    return 0;
}