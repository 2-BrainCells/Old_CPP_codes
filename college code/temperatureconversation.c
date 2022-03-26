#include <stdio.h>

int main()
{
    float temp;
    printf("Enter the temperature in celcius = ");
    scanf("%f", &temp);
    float kelvin , faren;
    kelvin = 273.15 + temp;
    faren = (9 / 5) * temp + 32;
    printf("The temprature in Kelvin is = %.3f K \nṇ", kelvin);
    printf("The temprature in Farenheit is = %.3f F", faren);
    return 0;
}