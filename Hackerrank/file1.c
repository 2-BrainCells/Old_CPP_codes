#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int r = n;
    // Complete the code to print the pattern.
    for (int i = 0; i < (2 * n) + 1; i++)
    {
        for (int j = 0; j < (2 * n) + 1; j++)
        {
            //     if(i == r || j == r )
            printf("%d  %d", i, j);
        }
        printf("\n");
    }
    return 0;
}