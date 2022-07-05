#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    printf("Enter the String = ");
    gets(a);
    int count = 0;
    int i = 0;
    do
    {
        count++;
        i++;
    } while (i < strlen(a));
    printf("lenght of the array = %d", count);
    return 0;
}