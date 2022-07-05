#include <stdio.h>

int findgdc = 0;
int gcd(int a, int b, int i)
{
    ;
    if (i <= a )
    {
        if (a % i == 0 && b % i == 0)
        {
            //printf("%d", i);
            findgdc = i;
        }
        gcd(a, b, i = i + 1);
    }
    return findgdc;
}
int main()
{
    int a, b;
    printf("First Number > Second Number \n");
    printf("Enter First number = ");
    scanf("%d", &a);
    printf("Enter Second number = ");
    scanf("%d", &b);
    printf("The G.D.C. is %d ", gcd(a, b, 1));
    return 0;
}
