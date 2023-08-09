#include <iostream>
#define pi 3.14159
using namespace std;
int main()
{
    float rad, h;
    cout << "Enter the radius of the cylinder (in cm) = ";
    cin >> rad;
    cout << "Enter the height of the cylinder (in cm) = ";
    cin >> h;
    double vol = pi * rad * rad * h;
    cout << "The volume of the cylinder is = " << vol << " cm^3";
    return 0;
}