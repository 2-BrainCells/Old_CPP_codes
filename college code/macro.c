#include <stdio.h>

#define sqr(a) a * a
#define inc(b) b + 1  
void main()
{
    int a, b, c;
    a = sqr(3 - 1);
    printf("Value of a  = ", a);
    b = inc(2) * sqr(4);
    printf("Value of b = ", b);
    c = inc(4 + 1) * sqr( 2 +2 );
    printf("Value of c = ", c);
}