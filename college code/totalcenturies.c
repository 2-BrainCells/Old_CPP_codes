#include <stdio.h>

int main()
{
    int score, sum = 0, i = 0, p = 0;
    repeat:
    printf("Enter the score of the player %d ", i + 1);
    scanf("%d", &score);
    i++;
    if (score >= 100)
        p++;
    if(i < 11)
    goto repeat;
    printf("The number of centuries are as follow = %d", p);    
    return 0;
}