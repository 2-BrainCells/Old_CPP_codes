#include <stdio.h>
int main()
{
    int a = 32;
    if ((a | 1) > a)
        printf("Even");
    else
        printf("Odd");
    return 0;
}

// (32 | 1)
// 100000  -> 32
// 000001  -> 1
// 100001

// 31 > 31  -> odd
// 32 > 32 - > even 
