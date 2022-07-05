#include <stdio.h>

void sum3(int a, int b, int c)
{
    int d;
    d = a + b + c;
    printf("%d", d);
}
int main()
{
    int a, b, c;
    printf("Enter the first number = ");
    scanf("%d", &a);
    printf("Enter the second number = ");
    scanf("%d", &b);
    printf("Enter the third number = ");
    scanf("%d", &c);
    sum3(a, b, c);
}