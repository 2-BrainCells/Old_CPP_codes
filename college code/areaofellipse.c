#include <stdio.h>
#define pi 3.1415

int main()
{
    int a, b;
    printf("Enter the value major axis = ");
    scanf("%d", &a);
    printf("Enter the value minor axis = ");
    scanf("%d", &b);
    float areae = pi * a * b;
    printf("The area of the ellipse is = %.4f", areae);
    return 0;
}