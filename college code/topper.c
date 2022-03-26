#include <stdio.h>

int main()
{
    int i = 0, a, b, c, d, e, roll = 0;
    float max = 0;
    while (i < 8)
    {
        printf("For the student %d \n", i + 1);
        printf("Enter the marks of the first subject ");
        scanf("%d", &a);
        printf("Enter the marks of the second subject ");
        scanf("%d", &b);
        printf("Enter the marks of the third subject ");
        scanf("%d", &c);
        printf("Enter the marks of the fourth subject ");
        scanf("%d", &d);
        printf("Enter the marks of the fifth subject ");
        scanf("%d", &e);
        i++;
        float avg;
        avg = (a + b + c + d + e) / 5;
        if (max < avg)
        {
            max = avg;
            roll = i ;
        }
    }
    printf("The highest avegrage marks are = %.3f for the roll number %d", max, roll);
    return 0;
}