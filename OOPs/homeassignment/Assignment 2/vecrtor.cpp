#include <iostream>
using namespace std;

class vector
{
    int x, y, z;

public:
    void getData()
    {
        cout << "Enter the X coordinate = ";
        cin >> x;
        cout << "Enter the Y coordinate = ";
        cin >> y;
        cout << "Enter the Z coordinate = ";
        cin >> z;
    }
    void modifyVal()
    {
        char a;
        int modi;
        cout << "Enter the value to be modified = ";
        cin >> modi;
        cout << "Enter the coordinate to be modified = ";
        cin >> a;
        switch (a)
        {
        case 'x':
            x = modi;
            break;
        case 'y':
            y = modi;
            break;
        case 'z':
            z = modi;
            break;
        default:
            cout << "The value entered is incorrect";
            break;
        }
    }
    void display()
    {
        cout << "Enter the X coordinate = " << x << endl;
        cout << "Enter the Y coordinate = " << y << endl;
        cout << "Enter the Z coordinate = " << z << endl;
    }
};
int main()
{
    vector vec;
    vec.getData();
    vec.modifyVal();
    vec.display();
    return 0;
}