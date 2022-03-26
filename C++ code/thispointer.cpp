#include <iostream>
using namespace std;

class simp
{
    int a;

public:
    // simp &setData(int a)
    void setData(int a)
    {
        this->a = a;
        // return *this;
    }
    void getData()
    {
        cout << "The value of a is  = " << a;
    }
};
int main()
{
    simp a;
    a.setData(4);
    a.getData();
    return 0;
}