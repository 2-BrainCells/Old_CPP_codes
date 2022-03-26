#include <stdio.h>

void main()
{
    int n1, n2;
    float E1;
    printf("Enter the value of the N1 = ");
    scanf("%d", &n1);
    printf("Enter the value of the N2 = ");
    scanf("%d", &n2);
    printf("Enter the value of the E1 = ");
    scanf("%f", &E1);
    float E2;
    if (n1 < n2)
    {
        E2 = E1 * (n2 / n1);
        printf("Enter the value of the E2 = %.3f", E2);
    }
    else
        printf("The value of N2 is smaller than N1");
}
