#include <iostream>
#include <math.h>
using namespace std;

class pointDistance
{
private:
    double x;
    double y;

public: 
    void getdata()
    {
        cout << "Enter the X-coordinate of the distance = ";
        cin >> x;
        cout << "Enter the Y-coordinate of the distance = ";
        cin >> y;
    }
    double calculateDistance(pointDistance d1, pointDistance d2)
    {
        double x1, y1, distance;
        x1 = d2.x - d1.x;
        y1 = d2.y - d1.y;
        distance = sqrt(pow(x1, 2) + pow(y1, 2));
        cout << distance;
    }
};

int main()
{
    pointDistance d1, d2, d3;
    d1.getdata();
    d2.getdata();
    d3.calculateDistance(d1, d2);
    return 0;
}