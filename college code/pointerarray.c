#include <stdio.h>

int main()
{
    int a[] = {1, 3, 4, 6};
    int *b = a;
    int sum = 0;
    for(int i = 0 ; i < 4 ;i++)
    {
        sum = sum + b[i]; 
    }
    printf("The sum is = %d", sum);
    return 0; 
}