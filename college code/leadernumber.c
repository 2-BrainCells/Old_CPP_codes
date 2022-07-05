#include <stdio.h>

void countleader(int n)
{

}
void leader(int n)
{
    int num, max = 0, num1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (max < num)
            max = num;
        num = 0;    
    }
    printf("%d", max);
}
int main()
{
    int n;
    scanf("%d", &n);
    enter(n);
    return 0;
}