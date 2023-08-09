#include <iostream>
#include <math.h>
using namespace std;
class triangle
{
    float a, b, c;

public:
    void getData()
    {
        cout << "Enter the sides of the triangle = ";
        cin >> a >> b >> c;
    }
    void area()
    {
        float s = (a + b + c) / 2;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << area << endl;
    }
    void perimeter()
    {
        float perimeter;
        perimeter = a + b + c;
        cout << perimeter << endl;
    }
};
int main()
{
    triangle t;
    t.getData();
    t.area();
    t.perimeter();
    return 0;
}