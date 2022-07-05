#include<stdio.h>
struct Books 
{
    char name[100];
    int price;
    int pages; 

};
struct Library
{
    int bookcode;
    struct Books b1;
};

int main()
{
    struct Library lib;
    printf("Enter the the name of the book = ");
    gets(lib.b1.name);
    printf("Enter the price of the books = ");
    scanf("%d", &lib.b1.price);
    printf("Enter the number of pages = ");
    scanf("%d", &lib.b1.pages);
    printf("Enter the books code of the book = ");
    scanf("%d", &lib.bookcode);
    printf("The name of the book is = ");
    puts(lib.b1.name);
    printf("The price of the books is = %d \n", lib.b1.price);
    printf("The pages in the book are = %d \n", lib.b1.pages);
    printf("Enter the books code of the book = %d", lib.bookcode);
    return 0;
}