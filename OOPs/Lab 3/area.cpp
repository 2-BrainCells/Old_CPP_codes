#include <iostream>
#include <math.h>
#define pi 3.1415
using namespace std;

void area(double rad)
{
    double carea = pi * rad * rad;
    cout << "Enter the area of the circle = " << carea << endl;
}
void area(double l, double b)
{
    double rarea = l * b;
    cout << "Enter the area of the rectangle = " << rarea << endl;
}
void area(double a, double b, double c)
{
    double tarea, s;
    if (a + b > c)
    {
        s = (a + b + c) / 2;
        tarea = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Enter the area of the triangle = " << tarea << endl;
    }
    else
        cout << "Not a triangle";
}
int main()
{
    double rad, length, breadth, a, b, c;
    cout << "Enter the value of the radius = ";
    cin >> rad;
    area(rad);
    cout << "Enter the value of the length and breadth = ";
    cin >> length >> breadth;
    area(length, breadth);
    cout << "Enter the sides of triangle = ";
    cin >> a >> b >> c;
    area(a, b, c);
    return 0;
}