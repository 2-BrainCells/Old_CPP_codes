#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("This is the first expression");
        break;
    case 2:
        printf("This is the second expression");
        break;
    default:
        printf("This is the default expression");
        break;
    }
}