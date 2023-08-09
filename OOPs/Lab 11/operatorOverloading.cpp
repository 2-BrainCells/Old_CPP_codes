#include <iostream>
using namespace std;
class dist
{
    int feet;
    int inches;

public:
    dist()
    {
        this->inches = 0;
        this->feet = 0;
    }
    dist(int feet, int inches)
    {
        this->inches = inches;
        this->feet = feet;
    }
    dist operator+(dist d)
    {
        this->inches = inches + d.inches;
        this->feet = feet + d.feet;
        return *this;
    }
    dist operator+(int k)
    {
        this->inches = inches + k;
        this->feet = feet + k;
        return *this;
    }
    void display()
    {
        cout << this->inches << endl
             << this->feet;
    }
};
int main()
{
    dist d1(3, 6), d2(4, 6), d3, d4;
    d3 = d2 + d1;
    d3.display();
    cout << endl;
    d4 = d1 + 5;
    d4.display();
    return 0;
}