#include <stdio.h>

void main()
{
    int a , b;
    printf("Enter the value of fisrt number = ");
    scanf("%d", &a);
    printf("Enter the value of second number = ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The swapped value of a and b are = %d, %d", a, b);
}