#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is = " << *(ptr) << endl;
    cout << "The address of a is = " << ptr << endl;

    // new keywrod
    float *p = new float(40.78);
    cout << "The value at address of p = " << *p << endl;

    // array
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "The value of arr[0] = " << arr[0] << endl;
    cout << "The value of arr[1] = " << arr[1] << endl;
    cout << "The value of arr[2] = " << arr[2] << endl;


    // delete operator
    delete [] arr;
    cout << "The value of arr[0] = " << arr[0] << endl;
    cout << "The value of arr[1] = " << arr[1] << endl;
    cout << "The value of arr[2] = " << arr[2] << endl;
    return 0;
}