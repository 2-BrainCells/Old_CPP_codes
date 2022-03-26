#include <stdio.h>

int main()
{
    float init, final, acc, t;
    printf("Enter the initial velocity = ");
    scanf("%f", &init);
    printf("Enter the final velocty  = ");
    scanf("%f", &final);
    printf("Enter the time  = ");
    scanf("%f", &t);
    acc = (final - init) / t;
    if (acc < 0)
        printf("The car is retarding");
    if (acc > 0)
        printf("The car is accelerating ");
    if (acc == 0)
        printf("The car is in uniform motion");
    return 0;
}