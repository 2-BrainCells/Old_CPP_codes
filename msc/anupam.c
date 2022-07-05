#include <stdio.h>
#include <string.h>
int main()
{
    char c[100];
    printf("Enter a input: ");
    scanf("%s", c);
    int countA = 0;
    int countB = 0;
    int flag = 1;
    for (int i = 0; i < strlen(c); i++)
    {
        if ((c[i] == 'a' || c[i] == 'b'))
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
        printf("Invalid state");
    else
    {
        for (int i = 0; i < strlen(c); i++)
        {
            if (c[i] == 'a')
                countA++;
            else if (c[i] == 'b')
                countB++;
        }
        if (countA % 2 == 0)
        {
            printf("Accepted string");
        }
        else
            printf("Rejected string");
    }
}
