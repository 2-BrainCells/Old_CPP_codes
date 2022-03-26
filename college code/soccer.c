#include <stdio.h>

int main()
{
    int score, sum = 0;
    int i = 0;
repeat:
    printf("Enter the score of the %d th player ", i + 1);
    scanf("%d", &score);
    sum = sum + score;
    i++;
    if (i < 11)
        goto repeat;
    int a = sum / 11;
    printf("The sum of the score is %d \n", sum );
    printf("The average of the score is %d", a);
    return 0;
}