#include <iostream>
using namespace std;
int main()
{
    int i = 1024;
    int count = 0;
    for (; i; i >>= 1)
    {
        count++;
        cout << "GeeksQuiz";
    }
    cout << count;
    return 0;
}