#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Enter the alphabet / digit (0 - 9) = ");
    scanf("%c", &c);
    if (c >= 48 && c <= 57)
    {
        c = c + 10;
        printf("%c", c);
    }
    else if( c >= 'A' && c <= 'Z')
    {
        printf("%c", tolower(c));
    }
    else if( c != 'A' && c != 'Z')
    {
        printf("No Change");
    }
    return 0;
}