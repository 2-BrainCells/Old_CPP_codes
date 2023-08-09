#include <iostream>
using namespace std;

class Data
{
    int data;
    static int in, on;

public:
    void getData()
    {
        cout << endl
             << "Enter the value of the data = ";
        cin >> data;
        in++;
    }
    void putData()
    {
        cout << endl
             << "The value of the data is = " << data;
        on++;
    }
    void display()
    {
        cout << endl
             << in << endl
             << on;
    }
};
int Data ::in = 0;
int Data ::on = 0;
int main()
{
    Data d;
    d.getData();
    d.putData();
    d.putData();
    d.putData();
    d.display();
    return 0;
}