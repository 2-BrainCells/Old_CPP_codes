#include <stdio.h>

void enter(int a[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void displaydiagonal(int a[100][100], int n)
{
    int max = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == j)
            {
                if(max < a[i][j])
                max = a[i][j];
            }
        }
    }
    printf("The maximum diagonal element is = %d" , max);
}
int main()
{
    int a[100][100], n;
    printf("Enter the size of the array = ");
    scanf("%d", &n);
    enter(a, n);
    displaydiagonal(a, n);
    return 0;
}