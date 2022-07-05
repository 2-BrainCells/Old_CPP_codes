#include <stdio.h>

void lowertoupper(int i)
{
    if (i >= 96 && i <= 122)
        printf("%c", i - 32);
    else
        printf("%c", i);
}
void main()
{
    char c;
    printf("Enter the character to make UPPERCASE = ");
    scanf("%c", &c);
    int i = c;
    lowertoupper(i);
    
}