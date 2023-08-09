#include <stdio.h>
int main()
{
    // Right shift Operator
    int a;
    printf("Enter a number = ");
    scanf("%d", &a);
    if ((a >> 0) % 2 == 0)
        printf("Even");
    else
        printf("Odd");
    printf("\n");
    // Left Shfit Operator
    printf("Enter a number = ");
    scanf("%d", &a);
    if ((a << 0) % 2 == 0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}

// 100 >> 3
// 100 / (2 ^ 3)
// 100 = 12

// 13 >> 0
// 13 / (2 ^ 3)
// 13 % 2 = 1

// left shift operator
// 13 << 0
// 13 * (2 ^ 0)
// 13 % 2 = 1