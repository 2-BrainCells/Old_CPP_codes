#include <iostream>
using namespace std;

class vector
{
    int x, y, z;

public:
    void getVector()
    {
        cout << "Enter the X axis = ";
        cin >> x;
        cout << "Enter the Y axis = ";
        cin >> y;
        cout << "Enter the Z axis = ";
        cin >> z;
    }
    void modifyVal()
    {
        int axis;
        char c;
        cout << "Enter the value of the axis = ";
        cin >> axis;
        cout << "Enter the axis to be changed (in lowercase) = ";
        cin >> c;
        switch (c)
        {
        case 'x':
            x = axis;
            break;
        case 'y':
            y = axis;
            break;
        case 'z':
            z = axis;
            break;
        default:
            cout << "Wrong Selection";
            break;
        }
        cout << "New values are  = " << x << " " << y << " " << z << endl;
    }
    void scalarMulti()
    {
        int axis, scalar;
        char c;
        cout << "Enter the scalar to multiplied = ";
        cin >> scalar;
        cout << "Enter the axis to be (in lowercase) = ";
        cin >> c;
        switch (c)
        {
        case 'x':
            x = scalar * x;
            break;
        case 'y':
            y = scalar * y;
            break;
        case 'z':
            z = scalar * z;
            break;
        default:
            cout << "Wrong Selection";
            break;
        }
        cout << "New values are  = " << x << " " << y << " " << z << endl;
    }
    void scalarMultiAll()
    {
        int scalar;
        char c;
        cout << "Enter the scalar to be multiplied  = ";
        cin >> scalar;
        x = scalar * x;
        y = scalar * y;
        z = scalar * z;
        cout << "New values are  = " << x << " " << y << " " << z << endl;
    }
    void scalarDivAll()
    {
        int scalar;
        char c;
        cout << "Enter the scalar to be divided = ";
        cin >> scalar;
        x = x / scalar;
        y = y / scalar;
        z = z / scalar;
        cout << "New values are  = " << x << " " << y << " " << z << endl;
    }
    void displayMatrix()
    {
        cout << "P ( " << x << ", " << y << ", " << z << " )." << endl;
    }
    void addScalar()
    {
        int xnew, ynew, znew;
        cout << "Enter the new value of x = ";
        cin >> xnew;
        cout << "Enter the new value of y = ";
        cin >> ynew;
        cout << "Enter the new value of z = ";
        cin >> znew;
        x = x + xnew;
        y = y + ynew;
        z = z + znew;
        cout << "New values are  = " << x << " " << y << " " << z << endl;
    }
};
int main()
{
    vector vec;
    vec.getVector();
    vec.modifyVal();
    vec.scalarMulti();
    vec.scalarMultiAll();
    vec.displayMatrix();
    vec.scalarDivAll();
    vec.addScalar();
    return 0;
}