#include <stdio.h>

void showequalto(char ch, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c ", ch);
    }
}
int main()
{
    char ch = '*';
    showequalto(ch, 10);
    return 0;
}