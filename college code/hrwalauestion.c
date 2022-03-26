#include <stdio.h>

int main()
{
    float basic_salary, HRA, DA;
    printf("Enter the Basic Salary of the employee = ");
    scanf("%f", &basic_salary);
    if (basic_salary < 1500)
    {
        HRA = 0.1 * basic_salary;
        DA = 0.4 * basic_salary;
    }
    else
    {
        HRA = 500;
        DA =  0.5 * basic_salary;
    }
    float gs = basic_salary + HRA + DA;
    printf("The Gross Salary of the employee is  = %.3f", gs);

    return 0;
}