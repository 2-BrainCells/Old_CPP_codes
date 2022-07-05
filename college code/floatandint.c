#include <stdio.h>

int multiply(int i, float f)
{
    int pro;
    pro = i * f;
    return pro;
}
int main()
{
    int a;
    float b;
    printf("Enter the integer  = ");
    scanf("%d", &a);
    printf("Enter the floating point number = ");
    scanf("%f", &b);
    printf("The product of the number is = %d", multiply(a, b));
    return 0;
}