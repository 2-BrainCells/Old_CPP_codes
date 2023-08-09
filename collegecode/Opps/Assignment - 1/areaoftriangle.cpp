#include <iostream>
#include <math.h>
using namespace std;
double area(double a, double b, double c)
{
    double s;
    s = (a + b + c) / 2;
    double area;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}
double area(double a, double b)
{
    double area;
    area = (sqrt(pow(a, 2) + pow(b, 2) / 4) * b) / 2;
    return area;
}
double area(double a)
{
    double area;
    area = (sqrt(3) / 4) * pow(a, 2);
    return area;
}
int main()
{
    cout << "The area of an scalene triangle is = " << area(3, 4, 5) << endl;
    cout << "The area of an isoceles triangle is = " << area(4, 4) << endl;
    cout << "The area of an equilateral triangle is = " << area(5) << endl;
    return 0;
}