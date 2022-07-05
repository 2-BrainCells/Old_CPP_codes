#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp =*x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a, b;
    printf("Enter the first number  = ");
    scanf("%d", &a);
    printf("Enter the second number = ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("\n");
    printf("First Number = %d \n" , a);
    printf("Secod Number = %d", b);
    return 0;
}