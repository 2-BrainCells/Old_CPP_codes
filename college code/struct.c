#include <stdio.h>

struct BOOKS
{
    int issuedate;
    float price;
};

int main()
{
    struct BOOKS b1[10];
    int n;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the issue date of book %d  = ", i + 1);
        scanf("%d", &b1[i].issuedate);
        printf("Enter the price of the book %d = ", i + 1);
        scanf("%f", &b1[i].price);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The issue date of book %d is %d \n", i + 1, b1[i].issuedate);
        printf("The price of the book %d is %.3f \n", i + 1, b1[i].price);
    }
    return 0;
}