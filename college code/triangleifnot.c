#include <stdio.h>

int main()
{
    float x1, x2, x3, y1, y2, y3;
    printf("Enter the coordinates of the X1 and Y1 = ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the coordinates of the X2 and Y2 = ");
    scanf("%f %f", &x2, &y2);
    printf("Enter the coordinates of the X3 and Y3 = ");
    scanf("%f %f", &x3, &y3);
    float m1, m2, m3;
    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);
    m3 = (y1 - y3) / (x1 - x3);
    if (m1 == m2 && m2 == m3 && m3 == m1)
        printf("The points are not a part of triangle ");
    else
        printf("The points are part of a triangle  ");
    return 0;
}