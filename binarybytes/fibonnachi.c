#include <stdio.h>

int fibbonachi(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibbonachi(n - 1) + fibbonachi(n - 2);
}

int main()
{
    for(int i = 0 ; i < 6 ; i++)
    {
        printf("%d ",fibbonachi(i));
    }
    return 0;
}