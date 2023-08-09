#include <stdio.h>

void and_operator(int a)
{
    if ((a & 1) == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
int main()
{
    int a;
    printf("Enter a number = ");
    scanf("%d", &a);
    and_operator(a);
}

//  int a = 31 odd
// a & 1 ----> 31 -> binary and perform the operations
// 31 & 1
// 11111
// 00001
// 00001 -->