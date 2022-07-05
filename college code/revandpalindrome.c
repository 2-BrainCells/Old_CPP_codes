#include <stdio.h>

void palindrome(int n, int check)
{
    int temp = n;
    if (temp == check)
        printf("Palinrome");
    else
        printf("Not Palindrome");
}
int sum = 0;
int reverse(int n)
{
    if (n > 0)
    {
        int rev = n % 10;
        sum = (sum * 10) + rev;
        reverse(n / 10);
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter the number to be checked ");
    scanf("%d", &n);
    int a = reverse(n);
    printf("The reverse of the number = %d \n", a);
    palindrome(n, a);
    return 0;
}