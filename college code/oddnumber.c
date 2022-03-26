#include <stdio.h>

int main()
{
    int num, n, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number = ");
        scanf("%d", &num);
        if (num % 2 != 0)
        {
            sum = sum + num;
        }
    }
    printf("The sum of the odd number is = %d ", sum);
    return 0;
}