#include <iostream>
#include <math.h>
using namespace std;
class Shape
{
protected:
    int area;

public:
    virtual void Area() = 0;
};
class Rectangle : public Shape
{
    int l, b;

public:
    Rectangle(int l, int b)
    {
        this->l = l;
        this->b = b;
    }
    void Area()
    {
        int area = l * b;
        cout << area;
    }
};
class Triangle : public Shape
{
    int a, b, c;

public:
    Triangle(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void Area()
    {
        int s = (a + b + c) / 2;
        int area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << area;
    }
};
using namespace std;
int main()
{
    Shape *s;
    Rectangle r(3, 4);
    Triangle t(3, 4, 5);
    s = &r;
    s->Area();
    s = &t;
    s->Area();
    return 0;
}