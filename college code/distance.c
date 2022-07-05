#include <stdio.h>
#include <math.h>

void enter(int a[100][100])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d%d ", i , j );
            scanf("%d ", &a[i][j]);
        }
    }
}
void distance(int a[100][100])
{
    float b[100];
    for (int i = 1; i < 10; i++)
    {
        b[i] = sqrt(pow(a[i][1] - a[i - 1][1], 2) + pow(a[i][0] - a[i - 1][0], 2));
        printf("%.3f ", b[i]);
    }
}
int main()
{
    int a[100][100];
    enter(a);
    distance(a);
    return 0;
}