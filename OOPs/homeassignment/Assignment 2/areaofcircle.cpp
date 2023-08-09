#include <iostream>
#define pi 3.1415
using namespace std;

class area
{
    float rad;
    float area;

public:
    void inputRad()
    {
        cout << "Enter the radius of the circle = ";
        cin >> rad;
    }
    void calculateArea()
    {
        area = pi * rad * rad;
    }
    void displayArea()
    {
        cout << "The area of the circle is = " << area;
    }
};
int main()
{
    area a;
    a.inputRad();
    a.calculateArea();
    a.displayArea();
    return 0;
}