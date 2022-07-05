#include<stdio.h>

void sum(int a , int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);
}
int main()
{
    int n1, n2;
    printf("Enter the first number = ");
    scanf("%d", &n1);
    printf("Enter the second number = ");
    scanf("%d", &n2);
    sum(n1, n2);
    return 0;
}