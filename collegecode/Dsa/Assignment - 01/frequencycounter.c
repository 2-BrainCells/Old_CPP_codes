#include <stdio.h>
void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void display(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}
void frequencyCount(int a[100], int n)
{
    int i = 0, k = 0, arr[100];
    while (i < n)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {

                count++;
            }
            else
            {
                arr[k] = count;
                k++;
            }
            printf("%d ", count);
        }
        i++;
        printf("\n");
    }
    display(arr, n);
}
int main()
{
    int a[100], n;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    enter(a, n);
    frequencyCount(a, n);
    // display(a, n);
    return 0;
}