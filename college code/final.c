#include <stdio.h>
#include <math.h>

void prime(int abl, int abh)
{

    for (int i = abl; i <= abh; i++)
    {
        int flag = 0;
        for (int j = 2; j <= i / 2; j++) // for (int i = 2; i < n ; i++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ", i);
    }
}
int main()
{
    int n, abl, abh;
    printf("Enter the lower bond to find the Prime Number = ");
    scanf("%d", &abl);
    printf("Enter the upper bond to find the prime Number = ");
    scanf("%d", &abh);
    prime(abl, abh);
    return 0;
}