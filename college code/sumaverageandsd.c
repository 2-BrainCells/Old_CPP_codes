#include <stdio.h>
#include <math.h>

int sum(int n1, int n2, int n3, int n4, int n5)
{
    int summation = 0;
    summation = n1 + n2 + n3 + n4 + n5;
    return summation;
}
float average(int n1, int n2, int n3, int n4, int n5)
{
    int summation = 0;
    summation = n1 + n2 + n3 + n4 + n5;
    float averagee ;
    averagee =  summation / 5.0;
    printf("%f", averagee);
    return averagee;
}
float standarddeviation(int n1, int n2, int n3, int n4, int n5)
{
    int summation = 0;
    summation = n1 + n2 + n3 + n4 + n5;
    float average = summation / 5.0;
    float sd ;
    sd = pow((n1 - average),2) + pow((n2 - average),2) + pow((n3 - average),2) +pow((n4 - average),2) + pow((n5 - average),2); 
    return sqrt(sd);

} 
int main()
{
    int n1, n2, n3, n4, n5;
    printf("Enter the first number = ");
    scanf("%d", &n1);
    printf("Enter the second number = ");
    scanf("%d", &n2);
    printf("Enter the third number = ");
    scanf("%d", &n3);
    printf("Enter the fourth number = ");
    scanf("%d", &n4);
    printf("Enter the fifth number = ");
    scanf("%d", &n5);
    printf("The sum of the number = %d \n", sum(n1, n2, n3, n4, n5));
    printf("The average of the number is = %.3f \n", average(n1, n2, n3, n4, n5));
    printf("The standard deviation = %.3f ", standarddeviation(n1, n2, n3, n4, n5));
    return 0;
}