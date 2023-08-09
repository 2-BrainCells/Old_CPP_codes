#include <stdio.h>
#include <stdlib.h>
void enterArray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of the array = ");
        scanf("%d", &ptr[i]);
    }
}
void displayArray(int *ptr, int n)
{
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", ptr[i]);
    }
}
void insertion(int *ptr, int n)
{
    int addElement, addIndex;
    printf("Enter the element to be added = ");
    scanf("%d", &addElement);
    printf("Enter the index where the element will be added = ");
    scanf("%d", &addIndex);
    for (int i = n; i >= 0; i--)
    {
        if (i >= addIndex)
        {
            ptr[i] = ptr[i - 1];
        }
    }
    ptr[addIndex] = addElement;
    displayArray(ptr, n);
    printf("\n");
}
void deletion(int *ptr, int n)
{
    int addElement, indexAt;
    printf("Enter the element to be deleted = ");
    scanf("%d", &addElement);
    for (int i = 0; i < n; i++)
    {
        if (addElement == ptr[i])
        {
            printf("The element %d is present at =  %d \n", addElement, i);
            indexAt = i;
            break;
        }
        else
        {
            printf("The element is not present \n");
            deletion(ptr, n);
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i < indexAt)
        {
            ptr[i - 1] = ptr[i];
            printf("%d", ptr[i - 1]);
        }
    }
    displayArray(ptr, n);
}

int main()
{

    int *ptr, n;
    printf("Enter the limit of the array = ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    enterArray(ptr, n);
    insertion(ptr, n);
    deletion(ptr, n);
    return 0;
}