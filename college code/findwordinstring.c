#include <stdio.h>
#include <string.h>

void enter(char ch[100], char word[100])
{
    printf("Enter the string ");
    gets(ch);
    printf("Enter the word ");
    gets(word);
}
void search(int ch[100], char word[100])
{
    int count = 1;
    puts(ch);
    printf("%d\n", strlen(ch));
    for (int i = 0; ch[i] != NULL; i++)
    {
        if (ch[i] != ' ')
        {
            if(ch[i] == word[0])
            {
                for(int j = 0 , k = i; ch[k] != ' '; j++, k++)
                {
                    if(ch[k] == word[j])
                    {
                        printf("*");
                    }
                }
            }
        }
    }
    printf("%d", count);
}
int main()
{
    char ch[100], word[100];
    enter(ch, word);
    search(ch, word);
    return 0;
}