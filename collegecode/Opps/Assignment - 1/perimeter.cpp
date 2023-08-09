#include <iostream>
#define pi 3.14159
using namespace std;
double perimeter(double a)
{
    double peri;
    peri = 2 * pi * a;
    return peri;
}
double perimeter(double a, double b)
{
    double peri;
    peri = 2 * (a + b);
    return peri;
}
double perimeter(double a, double b, double c)
{
    double peri;
    peri = a + b + c;
    return peri;
}
int main()
{
    cout << "The perimeter of a circle is = " << perimeter(3) << endl;
    cout << "The perimeter of a rectangle is = " << perimeter(4, 3) << endl;
    cout << "The perimeter of a triangle is  = " << perimeter(3, 4, 5) << endl;
    return 0;
}