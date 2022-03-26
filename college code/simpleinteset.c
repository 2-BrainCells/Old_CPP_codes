#include <stdio.h>

int main()
{
    float p, r, t, SI;
    printf("Enter the value of the Principle = ");
    scanf("%f", &p);
    printf("Enter the value of the Rate = ");
    scanf("%f", &r);
    printf("Enter the value of the Time = ");
    scanf("%f", &t);

    SI = (p * r * t) / 100;
    printf("The Simple Interest is = %.2f", SI);
    return 0;
}