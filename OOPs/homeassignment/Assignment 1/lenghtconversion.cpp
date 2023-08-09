#include <iostream>
using namespace std;
int main()
{
    float len;
    cout << "Enter the length in centimeter = ";
    cin >> len;
    float mlen = len / 100, kmlen = mlen / 1000;
    cout << "The length in meter is = " << double(mlen) << endl;
    cout << "The length in kilometers is = " << double(kmlen);
    return 0;
}      