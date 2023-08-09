#include <stdio.h>

void display(int arr[100], int n)
{
    // Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int insertion(int arr[100], int n, int element, int capacity, int index)
{
    if (capacity <= n)
    {
        return -1;
    }
    for (int i = n - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
void deletion(int arr[100], int n, int index, int capacity)
{
    if (index > n)
        printf("Not possible");
    for (int i = index; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5;
    int element = 45, index = 3;
    int a = insertion(arr, size, element, 100, index);
    if (a == 1)
    {
        printf("Successful Insertion\n");
        size += 1;
        display(arr, size);
    }
    else
        printf("The insertion was not successful");
    deletion(arr, size, index, 100);
    size -= 1;
    display(arr, size);
    return 0;
}