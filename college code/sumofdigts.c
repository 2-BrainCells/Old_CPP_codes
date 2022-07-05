#include <stdio.h>

int sum = 0;
int sumofdigits(int number)
{
    int  digit;
    if (number <= 0)
    {
        return sum;
    }
    digit = number % 10;
    //printf("%d", digit);
    sum = sum + digit;
    sumofdigits(number / 10);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sumofdigits(n));
    return 0;
}