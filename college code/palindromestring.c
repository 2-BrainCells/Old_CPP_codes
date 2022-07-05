#include <stdio.h>
#include <string.h>

void enter(char ch[100])
{
    printf("Enter the String = ");
    gets(ch);
}
void palindrome(char ch[100])
{
    char rev[100];
    strcpy(rev, ch);
    puts(ch);
    puts(rev);
    int flag = 0;
    int n = strlen(ch);
    for (int i = 0; ch[i] != NULL; i++)
    {
        if (rev[(n - 1) - i] != ch[i])
        {
            flag = 0;
            break;
        }
        else
            flag = 1;
        // printf("%c", rev[(n - 1) - i]);

        // printf("%c", ch[i]);
        // printf("\n");
    }
    strcmpi(rev, ch);
    if (flag == 0)
        printf("Not a plaindrome");
    else
        printf("Palindrome");
}
int main()
{
    char ch[100];
    enter(ch);
    palindrome(ch);
    return 0;
}