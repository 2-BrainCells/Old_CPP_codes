#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Enter the value of first side a = ");
    scanf("%d", &a);
    printf("Enter the value of second side b = ");
    scanf("%d", &b);
    printf("Enter the value of third side c = ");
    scanf("%d ", &c);
    int t = (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(b, 2) + pow(a, 2));
    printf("Printing 1 when true and 0 when false %d", t);
    return 0;
}