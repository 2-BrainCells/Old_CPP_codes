#include <iostream>
using namespace std;
class timer
{
    int sec;
    int min;
    int hours;

public:
    timer()
    {
        this->sec = 0;
        this->min = 0;
        this->hours = 0;
    }
    timer(int sec, int min, int hours)
    {
        this->sec = sec;
        this->min = min;
        this->hours = hours;
    }
    void correctTime()
    {
        if (this->sec > 60)
        {
            this->min = this->min + (this->sec % 60);
            this->sec = this->sec / 60;
        }
        if (this->min > 60)
        {
            this->hours = this->hours + (this->min % 60);
            this->min = this->min / 60;
        }
    }
    timer calculate(timer t)
    {
        this->sec = sec - t.sec;
        this->min = min - t.min;
        this->hours = hours - t.hours;
        cout << this->sec << endl
             << this->min << endl
             << this->hours << endl;
    }
};
int main()
{
    timer t1(20, 20, 4), t2(45, 30, 5), t3;
    t3 = t2.calculate(t1);
    return 0;
}