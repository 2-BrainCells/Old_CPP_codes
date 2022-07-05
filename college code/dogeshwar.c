#include <stdio.h>
#include <conio.h>
#include <math.h>

int binarytodecimal()
{
    int num, binary_num, decimal_num = 0, base = 1, rem;
    printf(" Enter a binary number with the combination of 0s and 1s \n");
    scanf(" %d", &num); // accept the binary number (0s and 1s)

    binary_num = num; // assign the binary number to the binary_num variable

    while (num > 0)
    {
        rem = num % 10; /* divide the binary number by 10 and store the remainder in rem variable. */
        decimal_num = decimal_num + rem * base;
        num = num / 10; // divide the number with quotient
        base = base * 2;
    }

    printf(" The binary number is %d \t", binary_num);      // print the binary number
    printf(" \n The decimal number is %d \t", decimal_num); // print the decimal
    getch();
    return 0;
}
void decimaltoOctal()
{
    long int decimalnum, remainder, quotient;
    long int octalNumber[100], i = 1, j;

    printf("Enter the decimal number: ");
    scanf("%ld", &decimalnum);
    quotient = decimalnum;
    while (quotient != 0)
    {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    printf("Equivalent octal value of decimal no %ld: ", decimalnum);
    for (j = i - 1; j > 0; j--)
        printf("%ld\n", octalNumber[j]);
    return;
}
void decimaltohex()
{
    long int decimalnum, quotient, remainder;
    int i, j = 0;
    char hexadecimalnum[100];

    printf("Enter decimal number: ");
    scanf("%ld", &decimalnum);

    quotient = decimalnum;

    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
            hexadecimalnum[j++] = 55 + remainder;
        quotient = quotient / 16;
    }

    // display integer into character
    for (i = j; i > 0; i--)
        printf("%c", hexadecimalnum[i]);
    return;
}
int main()
{
    int input;

    while (1)
    {
        printf("\nEnter the input for the rerquired quantity. 0 to quit\n 1.binarytodecimal\n 2.decimaltoOctal\n 3.decimaltohex\n 4.pound to kgs\n 5.inches to meters\n");
        scanf("%d", &input);
        switch (input)
        {
        case 0:
            printf("Quittting the program");
            goto end;
            printf("a");
            break;

        case 1:
            printf("1");
            binarytodecimal();
            break;

        case 2:
            decimaltoOctal();
            break;
        case 3:
            decimaltohex();
            break;
        }
    }
end:
    return 0;
}