#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("Enter the first number = ");
    scanf("%d", &a);
    printf("Enter the second number = ");
    scanf("%d", &b);
    printf("Enter the third number = ");
    scanf("%d", &c);
    printf("Enter the fourth number = ");
    scanf("%d", &d);
    printf("Enter the fifth number = ");
    scanf("%d", &e);
    int temp = a;
    if (temp < b)
    {
        temp = b;
        if (temp < c)
            temp = c;
        if (temp < d)
            temp = d;
        if (temp < e)
            temp = e;    
    }
    printf("The maximum in the above numbers are = %d", temp);
    return 0;
}