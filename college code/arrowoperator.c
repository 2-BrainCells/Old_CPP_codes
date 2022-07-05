#include <stdio.h>

struct Books
{
    char name[100];
    int price;
    int pages;
};

int main()
{
    struct Books b1, *ptr;
    ptr = &b1;
    printf("Enter the the name of the book = ");
    gets(ptr->name);
    printf("Enter the price of the books = ");
    scanf("%d", &ptr->price);
    printf("Enter the number of pages = ");
    scanf("%d", &ptr->pages);
    printf("The name of the book is = ");
    puts(ptr->name);
    printf("The price of the books is = %d \n", ptr->price);
    printf("The pages in the book are = %d", ptr->pages);
    return 0;
}
