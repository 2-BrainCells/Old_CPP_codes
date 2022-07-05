#include <stdio.h>

int fibonnaci(int a)
{
    if (a == 1 || a == 0)
        return a;
    return fibonnaci(a - 1) + fibonnaci(a - 2);
}
int main()
{
    int a;
    scanf("%d", &a);
    printf("The fibbonacci number is = %d", fibonnaci(a));
    return 0;
}
