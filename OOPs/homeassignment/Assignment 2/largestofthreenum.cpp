#include <iostream>
using namespace std;
class largest
{
    int a, b, c;

public:
    void getData()
    {
        cout << "Enter the first Number = ";
        cin >> a;
        cout << "Enter the second Number = ";
        cin >> b;
        cout << "Enter the third Number = ";
        cin >> c;
    }
    void largestNum()
    {
        int larger;
        if (a > b && a > c)
            larger = a;
        else if (b > a && b > c)
            larger = b;
        else
            larger = c;
        cout << "The largest of the three is = " << larger;
    }
};
int main()
{
    largest l;
    l.getData();
    l.largestNum();
    return 0;
}