#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void enter(int a[100])
{
    for (int i = 0; i < 11; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 11; i++)
    {
        printf("%d", a[i]);
    }
}
void searchnum(int a[100], int limit)
{
    for(int i = 0 ; i < limit; i++)
    {
        if(a[i] == a[0])
    }
}
void check(int b)
{
    int i;
    switch (b)
    {
    case 1:
        printf(" One ");
        break;
    case 2:
        printf(" Two ");
        break;
    case 3:
        printf(" Three ");
        break;
    case 4:
        printf(" Four ");
        break;
    case 5:
        printf(" Five ");
        break;
    case 6:
        printf(" Six ");
        break;
    case 7:
        printf(" Seven ");
        break;
    case 8:
        printf(" Eight ");
        break;
    case 9:
        printf(" Nine ");
        break;
    case 0:
        printf(" Zero ");
        break;

    default:
        break;
    }
}
void divide(int a[100], int n, int m, int o)
{
    for (int i = 0; i < n; i++)
    {
        check(a[i]);
    }
    for (int i = 3; i < n + m; i++)
    {
        check(a[i]);
    }
    for (int i = 7; i < n + m + o; i++)
    {
        check(a[i]);
    }
}
int main()
{
    int a[100], n, m, o;
    enter(a);
    scanf("%d %d %d", &n, &m, &o);
    if (n + m + o != 11)
    {
        printf("Error 404");
    }
    divide(a, n, m, o);
    return 0;
}