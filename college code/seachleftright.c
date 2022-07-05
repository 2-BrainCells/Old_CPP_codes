#include <stdio.h>

void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d number ", i + 1);
        scanf("%d", &a[i]);
    }
}
void search(int a[100], int n, int number)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == number)
            printf("The number foundout at position %d", i + 1);
    }
}
int main()
{
    int a[100], n, finnum;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    enter(a, n);
    printf("Enter the number to be found = ");
    scanf("%d", &finnum);
    search(a, n, finnum);
    return 0;
}