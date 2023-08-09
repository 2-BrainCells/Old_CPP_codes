#include <stdio.h>
int main()
{
    int a[10] = {1,
                 24,
                 2,
                 5,
                 6,
                 2,
                 0};
    int *ptr = a;
    printf("%d ", a[3]);
    printf("%d", *(ptr + 3));
    return 0;
}