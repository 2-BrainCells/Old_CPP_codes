#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("Enter the marks of the 5 subjects = ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int f = (a + b + c + d + e + 4.9) / 5;
    if (f > 59)
        printf("A division");
     if (f > 49 && f <= 59)
        printf("B division");
    if (f > 39 && f <= 49)
        printf("C division");
    if(f < 39)
        printf("fail");
    return 0;
}