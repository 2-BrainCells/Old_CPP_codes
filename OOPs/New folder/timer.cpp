#include <iostream>
using namespace std;
class timer
{
    int hours, minute, sec;

public:
    void getData(int hours, int minutes, int sec)
    {
        this->hours = hours;
        this->minute = minutes;
        this->sec = sec;
    }
    void calculate()
    {
        if (sec > 59)
        {
            this->minute = this->minute + (this->sec / 60);
            this->sec = this->sec % 60;
        }
        if (minute > 59)
        {
            this->hours = this->hours + (this->minute / 60);
            this->minute = this->minute % 60;
        }
        if (this->hours > 23)
        {
            cout << "Invalid Format" << endl;
        }
    }
    void putData()
    {
        cout << this->hours << " " << this->minute << " " << this->sec;
    }
};
int main()
{
    timer t;
    t.getData(12, 160, 45);
    t.calculate();
    t.putData();
    return 0;
}