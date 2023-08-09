#include <iostream>
using namespace std;

class shape
{
public:
    virtual void area() = 0;
};

class circle : public shape
{
    float r;

public:
    void area()
    {
        cout << "Enter radius : ";
        cin >> r;
        cout << "The area of the circle : " << 3.14 * r * r << endl;
    }
};

class triangle : public shape
{
    int base, height;

public:
    void area()
    {
        cout << endl
             << "Enter the base and height of the triangle : ";
        cin >> base >> height;
        cout << "The area of triangle : " << 0.5 * base * height << endl;
    }
};

class rectangle : public shape
{
    int breadth, length;

public:
    void area()
    {
        cout << endl
             << "Enter the length and breadth of the rectangle : ";
        cin >> length >> breadth;
        cout << "The area of rectangle : " << length * breadth << endl;
    }
};

int main()
{
    circle c;
    c.area();

    triangle t;
    t.area();

    rectangle rt;
    rt.area();

    return 0;
}