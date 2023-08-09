#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int imaginary;

public:
    void getData()
    {
        cout << "Enter the Real part of the number = ";
        cin >> real;
        cout << "Enter the Imaginary part of the number = ";
        cin >> imaginary;
        cout << endl;
    }
    void showData()
    {
        if (imaginary >= 0)
        {
            cout << real << " + " << imaginary << "i";
        }
        else
        {
            cout << real << " " << imaginary << "i";
        }
        cout << endl;
    }
};

int main()
{
    complex c[10];
    for (int i = 0; i < 10; i++)
    {
        c[i].getData();
        cout << "The " << i + 1 << " complex number is ";
        c[i].showData();
        cout << endl;
    }
    return 0;
}