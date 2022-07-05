#include <stdio.h>

int main()
{
    int a = 5;
    int *ptr = &a;
    char s[100];
    // scanf("%s \n", &s);
    gets(s);
    puts(s);
    printf("%s \n", s);
    // printf("%s", s);
    printf("%d \n", a);
    printf("%d \n", &a);
    printf("%d \n", ptr);
    printf("%d \n", *ptr);
    printf("%d \n", &ptr);
    int myArry[] = {1, 2, 3, 4, 54, 5, 6};
    int *ptr1 = myArry;
    printf("%d \n", ptr1);
    printf("%d \n", *ptr1);
    printf("%d \n", myArry + 1);
    printf("%d \n", myArry + 3);
    printf("%d \n", *(myArry + 1));
    puts(s);
}