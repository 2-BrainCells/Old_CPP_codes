#include <iostream>
using namespace std;
class distValue
{
    int dist;

public:
    distValue()
    {
        this->dist = 0;
    }
    distValue(int dist)
    {
        this->dist = dist;
    }
    distValue operator>(distValue d)
    {
        if (this->dist > d.dist)
        {
            return *this;
        }
        else
        {
            return d;
        }
    }
    distValue operator==(distValue d)
    {
        if (this->dist == d.dist)
        {
            cout << "The value are equal" << endl;
        }
        else
        {
            cout << "They are not same" << endl;
        }
    }
    void display()
    {
        cout << "Distance = " << this->dist << endl;
    }
};
int main()
{
    distValue d1(34), d2(45), d3;
    d3 = d1 > d2;
    d3.display();
    d1 == d2;
    return 0;
}