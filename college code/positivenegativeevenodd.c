#include <stdio.h>

void enter(int a[100])
{
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &a[i]);
    }
}
void positivenegative(int a[100])
{
    int pos = 0, neg = 0, odd = 0, even = 0;
    for (int i = 0; i < 20; i++)
    {
        if(a[i] > 0)
        pos++;
        if(a[i] < 0)
        neg++;
        if(a[i] % 2 == 0)
        even++;
        if(a[i] % 2 != 0)
        odd++;
    }
    printf("The number of Positive number in = %d \n", pos++);
    printf("The number of Negative number in = %d\n", neg++);
    printf("The number of Odd number in = %d\n", odd++);
    printf("The number of Even number in = %d\n", even++);
}
int main()
{
    int a[100];
    enter(a);
    positivenegative(a);
    return 0;
}