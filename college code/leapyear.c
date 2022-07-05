#include<stdio.h>

void leapyear(int year)
{
    if(year % 4 == 0)
    printf("The year is the leap year");
    else
    printf("The year is not a leap year");
}
int main()
{
    int year;
    scanf("%d", &year);
    leapyear(year);
    return 0;
}