#include <stdio.h>

int main()
{
    char ch[100], c;
    printf("Enter the String = ");
    gets(ch);
    printf("Enter the character to be searched = ");
    scanf("%c", &c);
    int count = 0;
    for (int i = 0; ch[i] != NULL; i++)
    {
        if (c == ch[i])
        {
            count++;
        }
    }
    printf("The frequency of character in array is = %d", count);
    return 0;
}