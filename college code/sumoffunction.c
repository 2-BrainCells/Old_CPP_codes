#include <stdio.h>

void sum(int a, int b, int c)
{
    int d;
    d = a + b + c;
    printf("%d", d);
}
int main()
{
    int n1, n2, n3;
    printf("Enter the first number = ");
    scanf("%d", &n1);
    printf("Enter the second number = ");
    scanf("%d", &n2);
    printf("Enter the third number = ");
    scanf("%d", &n3);
    sum(n1, n2, n3);
    return 0;
}