#include <stdio.h>

void sum()
{
    int summation = 0, n;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d th number= ", i + 1);
        scanf("%d", &n);
        summation = summation + n;
        n = 0;
    }
    printf("%d \n", summation);
    int avg = summation / 5;
    printf("%d", avg);
}
int main()
{
    sum();
    return 0;
}