#include <stdio.h>
#include <stdlib.h>

void enterArray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)

    {
        printf("Enter the value of the array = ");
        scanf("%d", ptr + i);
    }
}
void elemsBetween(int *ptr, int n, int a, int b)
{
    int count = 0;
    int lim1, lim2;
    for (int i = 0; i < n; i++)
    {
        if (ptr[i] == a)
            lim1 = i;
        if (ptr[i] == b)
            lim2 = i;
    }
    for (int i = lim1; i <= lim2; i++)
    {
        printf("%d ", ptr[i]);
        count++;
    }
    printf("The total number of elemrnts in range %d and %d is %d", a, b, count);
}
int main()
{
    int *ptr, n;
    printf("Enter the limit of the array - ");
    scanf("%d", &n);
    ptr = (int *)malloc(sizeof(int));
    enterArray(ptr, n);
    printf("\nEnter the range of for which the elements are to be found \n");
    int a, b;
    printf("Enter the lower limit = ");
    scanf("%d", &a);
    printf("Enter the upper limit = ");
    scanf("%d", &b);
    elemsBetween(ptr, n, a, b);
    return 0;
}