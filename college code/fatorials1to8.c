#include <stdio.h>

int factorial(int n)
{
    if (n < 1)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    for(int i = 0 ; i < 9 ; i++)
    {
        printf("The factorial of %d is %d\n",i,factorial(i));
    }
    return 0;
}