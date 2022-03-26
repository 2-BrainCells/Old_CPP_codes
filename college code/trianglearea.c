#include <stdio.h>

void main()
{
    int b, h;
    printf("Enter the height of the triangle = ");
    scanf("%d" , &h);
    printf("Enter the base of the triangle = ");
    scanf("%d", &b);
    float area;
    area = (b * h) / 2;
    printf("The area of the triangle is = %.2f" , area);
}