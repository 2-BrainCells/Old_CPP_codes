#include <stdio.h>

int checkprime(int i)
{
    int k = i / 2;
    int flag = 0;
    for (int j = 2; j <= k; j++)
    {
        if (i % j == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Prime Factors are = %d \n", i);
}
int factors(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            // printf("%d ", i);
            checkprime(i);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    factors(n);
    checkprime(n);
    return 0;
}