#include <stdio.h>

void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void distinct(int *a[100], int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        int num = 0;
        for(int j = 0; j < n; j++)
        {
            if(*a[i] == *a[j])
            {
                num++;
            }
            printf("The numbr of %d is %d ", *a[i] , num);
        }
    }
}
int main()
{
    int a[100], n;
    int *b = a;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    enter(a, n);
    distinct(b, n);
    return 0;
}