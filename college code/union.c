#include <stdio.h>
union numbers
{
    int a, b;
};
int main()
{
    union numbers num;
    num.a = 14;
    printf("The value of a and b are = %d , %d repc. \n",num.a, num.b);
    num.b = 12;
     printf("The value of a and b are = %d , %d repc.",num.a, num.b);
    return 0;
}