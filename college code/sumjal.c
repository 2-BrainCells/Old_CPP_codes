#include <stdio.h>
#include <time.h>
struct date
{
    int date;
    int month;
    int year
};
void enter(struct date t1, struct date t2)
{

    printf("Enter the date for the first iteration = ");
    scanf("%d", &t1.date);
    printf("Enter the month for the first iteration = ");
    scanf("%d", &t1.month);
    printf("Enter the year for the first iteration = ");
    scanf("%d", &t1.year);
    printf("Enter the date for the second iteration = ");
    scanf("%d", &t2.date);
    printf("Enter the month for the second iteration =");
    scanf("%d", &t2.month);
    printf("Enter the year for the second iteration = ");
    scanf("%d", &t2.year);
}

int cmpDate(struct date t1, struct date t2)
{

    if (t1.year > t2.year)
    {
        return 1;
    }
    if (t1.year < t2.year)
    {
        return 0;
    }
    if (t1.year == t2.year)
    {
        if (t1.month > t2.month)

            return 0;

        else
            return 1;
    }
}
int isInvalid(struct date t1, struct date t2)
{
    if ((0 < t1.date && t1.date >= 31) && (0 < t2.date && t2.date >= 31))
        printf("The dates are invalid");
    if ((0 < t1.month && t1.month >= 12) && (0 < t2.month && t2.month >= 12))
        printf("The months are invalid");
    int a = cmpDate(t1, t2);
    printf("The result of the function is = %d  ", a);
}
int main()
{
    struct date t1, t2;
    enter(t1, t2);
    isInvalid(t1, t2);
    return 0;
}