#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100], ch1[100];
    int n;
    printf("Enter the First String = ");
    gets(ch);
    printf("Enter the Second String = ");
    gets(ch1);
    int length = strlen(ch);
    for (int i = 0; ch1[i] != NULL; i++, length++)
    {
        ch[length] = ch1[i];
    }
    ch[length] = '\0';
    puts(ch);
    printf("\n");
    return 0;
}