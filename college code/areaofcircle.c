#include <stdio.h>
#include <math.h>
#define pi 3.141
void main()
{
    float radius, area;
    printf("Enter the radius of the circle = ");
    scanf("%f", &radius);
    area = pi * pow(radius, 2);
    printf("The area of the circle is %.3f", area);
}