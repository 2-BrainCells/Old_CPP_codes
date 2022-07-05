#include <stdio.h>
#include <math.h>

int sum = 0;
int i = 0;
void decimaltobinary(int n)
{

    if (n > 0)
    {
        int digit = n % 2;
        printf("%d ", digit);
        sum = sum + pow(10, i) * digit;
        printf("%d ", sum);
        i++;
        decimaltobinary(n / 2);
        }
    // printf("%d", sum);
}
int main()
{
    int dnumber;
    scanf("%d", &dnumber);
    decimaltobinary(dnumber);
    return 0;
}