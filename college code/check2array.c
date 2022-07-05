#include <stdio.h>

void enter1(int a1[100], int n1)
{
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a1[i]);
    }
}
void enter2(int a2[100], int n2)
{
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &a2[i]);
    }
}
void checkarrays(int a1[100], int a2[100], int n1, int n2)
{
    int flag = 0;

    for (int i = 0; i < n1; i++)
    {
        if (a1[i] == a2[i])
        {
            flag = 0;
        }
        else
            flag = 1;
    }
    if (flag == 0)
        printf("The arrays are same");
    else
        printf("Theh arrays are not same");
}
int main()
{
    int a1[100], a2[100], n1, n2;
    printf("Enter the limits of the array = ");
    scanf("%d %d", &n1, &n2);
    if (n1 != n2)
    {
        printf("The arrays are not same");
        return 0;
    }
    printf("Running the first array \n");
    enter1(a1, n1);
    printf("Running the second array \n");
    enter2(a2, n2);
    checkarrays(a1, a2, n1, n2);
    return 0;
}