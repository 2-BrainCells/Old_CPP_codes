#include<stdio.h>
#include<stdbool.h>

int main()
{
    int a, b, c;
    printf("Enter the first side of the triangle = ");
    scanf("%d",&a);
    printf("Enter the first side of the triangle = ");
    scanf("%d",&b);
    printf("Enter the first side of the triangle = ");
    scanf("%d",&c);
    int t = a + b > c && a + c > b && b + c > a;
    printf("%d", t);
    // if(t)
    // {
    //     printf("The values enterd are corresponds to a trinagle's side");
    //     printf("%B",t );
    // }
    // else 
    // {
    //     t = false;
    //     printf("%B", t);
    // }
}