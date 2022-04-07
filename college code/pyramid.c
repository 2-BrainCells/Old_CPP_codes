#include <stdio.h>

int main()
{
    int n;
    char c = '$';
    scanf("%d", &n);
    int count1 = n - 1, count2 = n - 1, count3 = 3 * n - 2, count4 = 3 * n - 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4 * n - 2; j++)
        {
            if ((j >= count1 && j <= count2) || (j >= count3 && j <= count4))
                printf("%c", c);
            else
                printf(" ");
        }
        printf(" \n");
        count1--;
        count2++;
        count3--;
        count4++;
    }

    return 0;
}