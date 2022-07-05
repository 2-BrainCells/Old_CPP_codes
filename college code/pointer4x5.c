#include <stdio.h>

void enter(int a[100][100])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void display(int a[100][100])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", *(*(a + i) + j));
        }
        printf("\n");
    }
}
int main()
{
    int a[100][100];
    int *b = a;
    enter(b);
    display(b);
    return 0;
}