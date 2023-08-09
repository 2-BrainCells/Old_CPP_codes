#include <iostream>
#include <math.h>
using namespace std;

int convertDecimal(int num)
{
    int convert = 0, i = 0;
    while (num > 0)
    {
        int a = num % 10;
        convert = convert + (pow(2, i) * a);
        num = num / 10;
        i++;
    }
    if (num <= 0)
        return convert;
}
int converBinary(int num)
{
    int decimal = 0, i = 0;
    while (num > 0)
    {
        if (num == 1)
        {
            decimal = decimal + (num * pow(10, i));
            return decimal + 1;
        }
        int a = num % 2;
        decimal = decimal + (a * pow(10, i));
        num = num / 2;
        i++;
    }
    converBinary(num);
}
int main()
{
    int num1, num2, c1, c2;
    cout << "Enter the first binary number = ";
    cin >> num1;
    cout << "Enter the second binary number = ";
    cin >> num2;
    c1 = convertDecimal(num1);
    c2 = convertDecimal(num2);
    int add = c1 + c2;
    cout << add << endl;
    cout << converBinary(add);

    return 0;
}