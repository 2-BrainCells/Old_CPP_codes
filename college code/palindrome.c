#include <stdio.h>
#include <math.h>

int main()
{
    int n, c = 0, revnum = 0;
    printf("Enter the number to be checked ");
    scanf("%d", &n);
    int temp = n;
    // int q = pow(2,0);
    // printf("%d ", q);
    while (n > 0)
    {
        int ls;
        ls = n % 10;
        // printf("%d ", ls);
        revnum = revnum * 10 + ls;
        // printf("%d", revnum);
        n = n / 10;
        // printf("\n");
        c++;
    }
    //printf("%d ", revnum);
    if (revnum == temp)
        printf("The number palindrome");
    else
        printf("The number is not palindrome");
}