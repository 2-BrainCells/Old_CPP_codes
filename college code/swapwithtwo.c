#include <stdio.h>

void main()
{
    int a , b;
    printf("Enter first number = ");
    scanf("%d", &a);
    printf("Enter second number = ");
    scanf("%d", &b);
    int temp;
    temp  =  a;
    a = b;
    b = temp ;
    printf("The swapped numbers are as follow = %d  %d", a, b);
    
}