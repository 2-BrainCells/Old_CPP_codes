#include <stdio.h>
#include <math.h>
#define pi 3.14
#define g 10

int main()
{
    float T , length;
    printf("Enter the length 1 of the pendulum = ");
    scanf("%f", &length);
    T = 2 * pi * sqrt(length / g);
    printf("The time period of pendulum is = %.3f \n", T);
    T = 0;
    printf("Enter the length 2 of the pendulum = ");
    scanf("%f", &length);
    T = 2 * pi * sqrt(length / g);
    printf("The time period of pendulum is = %.3f \n", T);
    T = 0;
    printf("Enter the length 3 of the pendulum = ");
    scanf("%f", &length);
    T = 2 * pi * sqrt(length / g);
    printf("The time period of pendulum is = %.3f \n", T);
    T = 0;
    printf("Enter the length 4 of the pendulum = ");
    scanf("%f", &length);
    T = 2 * pi * sqrt(length / g);
    printf("The time period of pendulum is = %.3f \n", T);
    T = 0;
    return 0;
}