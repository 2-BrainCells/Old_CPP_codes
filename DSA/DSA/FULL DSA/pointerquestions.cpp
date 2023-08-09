#include <iostream>
using namespace std;
int main()
{
    // int first = 21;
    // int second = 22;
    // int *ptr = &second;
    // *ptr = 32;
    // cout << first << " " << second;

    // int first = 6;
    // int *p = &first;
    // int *q = p;
    // (*q)++;
    // cout << *q << " " << *p << " " << first << endl;

    // int a = 12;
    // int *ptr = 0;
    // ptr = &a;
    // cout << *ptr;

    // int first = 8;
    // int second = 11;
    // int *third = &second;
    // first = *third;
    // *third = *third + 2;
    // cout << first << " " << second << endl;

    // float f = 12.5;
    // float p = 21.5;
    // float *ptr = &f;
    // (*ptr)++;
    // cout << *ptr << " " << f << " " << p << endl;

    // *ptr = p;
    // cout << *ptr << " " << f << " " << p << endl;

    int arr[6] = {11, 21, 31};
    int *p = arr;
    cout << p[2] << endl;
    return 0;
}