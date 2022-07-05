#include <stdio.h>

int sum = 0;
int recursive(int a)
{
    int d = 0;
    if (a > 0)
    {
        d = a % 10;
        // printf("%d", d);
        sum = sum + d;
        // printf("%d", sum);
        recursive(a / 10);
    }
    return sum;
}
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d",recursive(a));
    return 0;
}