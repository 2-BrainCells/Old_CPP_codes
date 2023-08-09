#include <iostream>
using namespace std;
class test
{
    int code;
    static int count;
public:
    void setcode()
    {
        code = ++count;
    }
    void showcode()
    {
        cout << "object no =" << code << endl;
    }
    // Static Member Function Example
    static void showcount()
    {
        cout << "Count =" << count;
    }

}; // end of class
int test::count;
int main()
{
    test t1, t2;
    t1.setcode();
    t2.setcode();
    test::showcount();
    test t3;
    t3.setcode();
    test::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
}