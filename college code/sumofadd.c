#include<stdio.h>

void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void sumofoddfrequencies(int a[100], int n)
{
    
}
int main()
{
    int a[100], n;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    enter(a ,n);
    return 0; 
}