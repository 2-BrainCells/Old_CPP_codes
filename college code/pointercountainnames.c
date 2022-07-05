#include <stdio.h>
#include <string.h>

void enter(char ch[100][100], int n)
{
    for (int i = 0; i < n + 1; i++)
    {
        gets(ch[i]);
    }
}
void counta(char ch[100][100], int n)
{
    int count = 0;
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < strlen(ch[i]); j++)
        {
            if (ch[i][j] == 'a' ||ch[i][j] == 'A' )
                count++;
        }
        
    }
    printf("The total number of A or a present in array is = %d", count);
}
int main()
{
    char ch[100][100];
    int n;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    enter(ch, n);
    counta(ch, n);
    return 0;
}