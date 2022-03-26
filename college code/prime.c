#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool flag = true;
int main()
{
    int num;
    printf("Enter the number to be checked ");
    scanf("%d", &num);
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            printf("Not prime");
            flag = false;
            break;
        }
    }
    if (flag == true)
        printf("Prime number");
    return 0;
}