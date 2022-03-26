#include <stdio.h>
#include <time.h>

int main()
{
    char user;
    int pass;
    printf("Enter the Username  ");
    scanf("%c", &user);
    printf("Enter the Password ");
    scanf("%d", &pass);
    if (user == 'a' && pass == 12345)
        printf("Welcome Back");

    else
        printf("Either Username or Password is incorrect");

    return 0;
}