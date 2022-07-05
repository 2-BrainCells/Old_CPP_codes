#include <stdio.h>

void enter(int a[100], int n)
{
    for (int i = 0; i <  n; i++)
    {
        scanf("%s", &a[i]);
    }
}
void finda(int a[100], int n)
{
    int counta = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) == 'a')
            counta++;
    }
    printf("Number of a in array %d", counta);
}
int main()
{
    int a[100], n;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    int *b = a;
    enter(b, n);
    finda(b, n);
    return 0;
}