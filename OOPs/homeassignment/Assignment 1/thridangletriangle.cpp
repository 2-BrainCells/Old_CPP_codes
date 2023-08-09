#include <iostream>
using namespace std;
int main()
{
    float ang1, ang2;
    cout << "Enter the first angle of the triangle = ";
    cin >> ang1;
    cout << "Enter the second angle of the triangle = ";
    cin >> ang2;
    float ang3 = 180 - (ang1 + ang2);
    cout << "The third angle of the triangle is = "
         << ang3 << endl;
    return 0;
}