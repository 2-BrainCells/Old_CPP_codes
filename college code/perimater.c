#include <stdio.h>

void main()
{
    int s1, s2, s3;
    printf("Enter the first side of the triangle = ");
    scanf("%d", &s1);
    printf("Enter the second side of the triangle = ");
    scanf("%d", &s2);
    printf("Enter the first side of the triangle = ");
    scanf("%d", &s3);
    float perimeter;
    perimeter = s1 + s2 + s3 ;
    printf("The area of the triangle is = %.2f", perimeter);
}