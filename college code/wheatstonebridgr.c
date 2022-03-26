#include <stdio.h>

int main()
{
    float p, q, r, s;
    printf("Enter the value of the p = ");
    scanf("%f", &p);
    printf("Enter the value of the q = ");
    scanf("%f", &q);
    printf("Enter the value of the r = ");
    scanf("%f", &r);
    printf("Enter the value of the s = ");
    scanf("%f", &s);
    if (p * s != q * r)
    {
        printf("The wheatstone bridge is unbalanced \n");
        s = (q * r) / p;
        printf("As the value of s can be changed thus , actual value of s is = %.3f", s);
    }
    else
        printf("This is a balanced wheatstone bridge");
}