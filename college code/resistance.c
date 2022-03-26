#include <stdio.h>

int main()
{
    float r1, r2, r3;
    printf("Enter the value of first resistance = ");
    scanf("%f", &r1);
    printf("Ente the value of second resistance = ");
    scanf("%f", &r2);
    printf("Enter the value of thrid resistance = ");
    scanf("%f", &r3);
    float series, parallel;

    series = r1 + r2 + r3;
    parallel = (r1 * r2 * r3) / ((r2 * r3) + (r1 * r3) + (r1 * r2));
    printf("The series resistance is =  %.3f \n", series);
    printf("The parallel resistance is =  %.3f", parallel);
    return 0;
}