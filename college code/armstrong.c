#include <stdio.h>
#include <math.h>

int main()
{
    int n, revnum = 0, c = 0;
    printf("Enter the number to be checked ");
    scanf("%d", &n);
    int search = n;
    while (n > 0)
    {
        int ls;
        ls = n % 10;
        printf("%d \n", ls);
        revnum = revnum + pow(ls, 3);
        printf("%d ", revnum);
        c++;
        n = n / 10;
    }
    printf("%d " , revnum);
    if (search == revnum)
        printf("The numeber is armstorng");
    else
        printf("The number is not armstrong");
    return 0;
}