#include <stdio.h>
#include <string.h>

void enter(char ch[100], char word[100])
{
    printf("Enter the string = ");
    gets(ch);
    printf("Enter the word = ");
    gets(word);
}
void search(char ch[100], char word[100])
{
    int  i = 0,k;
    char spare[100];
    for( ; ch[i] != NULL ;)
    {
        for(k = i; ch[k] != ' '; k++)
        {
            spare[i] = ch[k];
        }
        spare[k] = '/0';
        if(strcmp(spare, word) == 0)
        {
            printf(" dfdfdf");
        }
        i = k + 1;
    }
}
int main()
{
    char ch[100], word[100];
    enter(ch, word);
    search(ch, word);
    return 0;
}