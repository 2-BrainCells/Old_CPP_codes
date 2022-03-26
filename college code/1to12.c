#include<stdio.h>

int main()
{
    int class;
    printf("Enter the class of the student = ");
    scanf("%d", &class);
    
    printf("KIIT");
    if(class <= 12)
        printf(" Student");
    else
    printf(" University");
}