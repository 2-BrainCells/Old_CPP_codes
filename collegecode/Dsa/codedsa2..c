#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number= ");
    scanf("%d", &a);
    if((a | 1) == 0)
    printf("Odd");
    else
    printf("Even");
    return 0;
}