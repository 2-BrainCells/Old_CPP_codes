#include <iostream>
using namespace std;

class counter
{
    static int count;

public:
    void updater()
    {
        count++;
    }
    void display()
    {
        cout << "The number of objects are = " << count;
    }
};
int counter ::count;
int main()
{
    counter c1, c2, c3, c4;
    c1.updater();
    c2.updater();
    c3.updater();
    c4.updater();
    c3.display();
    return 0;
}