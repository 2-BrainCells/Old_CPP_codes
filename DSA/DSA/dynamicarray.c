#include<stdio.h>
#include<stdlib.h>
int main()
{
    int * ptr ;
    ptr = (int *)malloc(10 * sizeof(int));
    for(int i = 0 ; i < 10 ; i++)
    {
        ptr[i] = i + 1;
    }
    printf("%d ", ptr[0]);
    return 0;
}