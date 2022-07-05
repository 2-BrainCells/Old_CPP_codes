#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100];
    gets(ch);
    char word[100];
    gets(word);
    int l = 0, i = 0, k;
    char spare[100];
    for (; ch[i] != NULL; l = k)
    {
        // printf("i = %d \n", i);
        for (k = i; ch[k] != ' ' && ch[k] != NULL ; k++)
        {
            spare[k] = ch[k];
            // printf("%c %c \n", spare[k], ch[k]);
        }
        spare[k] = '/0';
        int result = strcmp(spare, word);
        puts(spare);
        printf("\n");
        puts(word);
        printf("\n");
        printf("%d", result);
        if (result == 0)
        {
            printf(" dfdfdf");
        }
        i = k + 1;
        // printf("l = %d k = %d \n", l, k);

        // memset(spare, 0 , sizeof(int));
    }
    // char ch[100];
    // gets(ch);
    // char enter[100];
    // for (int i = 0; ch[i] != NULL; i++)
    // {
    //     enter[i] = ch[i];
    //     printf("%c %c \n", ch[i], enter[i]);
    // }
    // int result = strcmp(enter, ch);
    // printf("%d" , result);
    // if ( result == 0)
    //     printf("YES");
    // else
    //     printf("SHIT");
}