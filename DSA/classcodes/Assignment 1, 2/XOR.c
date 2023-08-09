#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number = ");
    scanf("%d", &a);
    if ((a ^ 1) > a)
        printf("Even");
    else
        printf("Odd");
    return 0;
}

// (32 ^ 1)
// 100000 -> 32
// 000001 -> 1
// 100001 -> 33

// 33 > 32 -> Even

// 31 ^ 1
// 11111  -> 31
// 00001  -> 1
// 11110  -> 30
