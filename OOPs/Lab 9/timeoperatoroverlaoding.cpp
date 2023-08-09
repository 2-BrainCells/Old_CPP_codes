#include <iostream>
using namespace std;
class timer
{
    int seconds;
    int minutes;
    int hours;

public:
    timer()
    {
        this->seconds = 0;
        this->minutes = 0;
        this->hours = 0;
    }
    timer(int sec, int min, int hour)
    {
        this->seconds = sec;
        this->minutes = min;
        this->hours = hour;
    }

    timer operator+(timer t)
    {
        this->seconds = seconds + t.seconds;
        this->minutes = minutes + t.minutes;
        this->hours = hours + t.hours;
        return *this;
    }
    void display()
    {
        cout << "The addition is " << this->seconds << " seconds " << this->minutes << " minutes " << this->hours << " hours " << endl;
    }
    int converstion(timer t)
    {
        long long totalTime;
        totalTime = t.seconds + (60 * t.minutes) + (t.hours * 3600);
        return totalTime;
    }
    timer operator==(timer t)
    {
        if (converstion(*this) == converstion(t))
        {
            cout << "They are equal" << endl;
        }
        else
        {
            cout << "They are not equal" << endl;
        }
    }
};
int main()
{
    timer t1(1, 1, 0), t2(6, 3, 5), t3;
    t2 == t1;
    t3 = t1 + t2;
    t3.display();
}