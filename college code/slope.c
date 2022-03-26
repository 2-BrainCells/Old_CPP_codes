#include <stdio.h>

int main()
{
    float x1, x2, y1, y2;
    printf("Enter the value of X1 = ");
    scanf("%f", &x1);
    printf("Enter the value of X2 = ");
    scanf("%f", &x2);
    printf("Enter the value of Y1 = ");
    scanf("%f", &y1);
    printf("Enter the value of Y2 = ");
    scanf("%f", &y2);
    float slope;
    slope = (y2 - y1) / (x2 - x1);
    printf("The value of slope = %.3f", slope);
}