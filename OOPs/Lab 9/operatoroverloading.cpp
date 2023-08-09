#include <iostream>
using namespace std;
class feetInches
{
    int feet, inches;

public:
    feetInches()
    {
        cout << "Enter the distance in feet = ";
        cin >> feet;
        cout << "Enter the distance in inches = ";
        cin >> inches;
    }
    feetInches operator+(feetInches f)
    {
        inches = this->inches + f.inches;
        if (inches > 11)
        {
            this->feet = this->feet + (inches / 12);
            inches = int(inches) % 12;
        }
        feet = this->feet + f.feet;
        cout << "The distance in feet = " << feet << endl;
        cout << "The distance in inches = " << inches << endl;
    }
    feetInches operator+(int x)
    {
        inches = this->inches + x;
        cout << "The distance in feet = " << feet << endl;
        cout << "The distance in inches = " << inches << endl;
    }
    ~feetInches()
    {
    }
};
int main()
{
    feetInches f1, f2;
    feetInches f3 = f1 + f2;
    feetInches f4 = f1 + 4;
    return 0;
}