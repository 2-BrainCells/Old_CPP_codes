#include <stdio.h>

void enter1(int a1[100][100])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a1[i][j]);
        }
    }
}
void enter2(int a2[100][100])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a2[i][j]);
        }
    }
}
void adding(int a1[100][100], int a2[100][100])
{
    int k[100][100];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            k[i][j] = a1[i][j] + a2[i][j];
            printf("%d ", k[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a1[100][100], a2[100][100];
    printf("Running First array ");
    enter1(a1);
    printf("Running Second array ");
    enter2(a2);
    adding(a1, a2);
    return 0;
}