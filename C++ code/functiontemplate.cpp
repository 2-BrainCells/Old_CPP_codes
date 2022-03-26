#include <iostream>
#include <iomanip>
using namespace std;
// float funcAvg(int a , int b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }
// float funcAvg2(int a , float b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }
template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
    cout << fixed << setprecision(2) << a << endl
         << b;
}
template <class T1, class T2>
float funcAvg(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
int main()
{
    float a, b;
    a = funcAvg(5, 2.90);
    // b = funcAvg2(5, 2.12);
    cout << fixed << setprecision(2) << a << endl;
    // printf("%.2f", b);
    int x = 10, y = 1.2;
    swapp(x, y);
    return 0;
}