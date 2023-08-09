#include <iostream>
using namespace std;
int main()
{
    int p = 4;
    int *ptr = &p;
    
    cout << (*ptr)++ << endl;
    cout << ++(*ptr) << endl;
    // cout << a++ << " " << ++b << endl?;
    return 0;
}