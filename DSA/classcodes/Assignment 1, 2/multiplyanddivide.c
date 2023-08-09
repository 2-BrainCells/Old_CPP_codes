#include<stdio.h>
int main()
{
    int a = 13;
    if((a / 2) * 2 == a)
    printf("Even");
    else
    printf("Odd");
    return 0;
}

// 13 / 2 = 6 
// 6 * 2 = 12 (13 != 12)

// 14 / 2 = 7
// 7 * 2 = 14

// 5 / 2 = 2
// 2 * 2 = 4

// 6 / 2 = 3
// 3 * 2 = 6 