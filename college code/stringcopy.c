#include <stdio.h>

int main()
{
    char src[100], dst[100];
    int n;
    printf("Enter the First String = ");
    gets(src);
    for (int i = 0; src[i] != NULL; i++)
    {
        dst[i] = src[i];
        printf("%c", dst[i]);
    }
}