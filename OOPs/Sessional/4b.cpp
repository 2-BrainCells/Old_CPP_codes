#include <iostream>
using namespace std;
template <class T1, class T2 = int>
class add
{
    T1 a;
    T2 b;
    T1 sum;

public:
    add(T1 a, T2 b)
    {
        sum = a + b;
    }
    ~add()
    {
        cout << sum << endl;
    }
};
int main()
{
    add<int, int> a1(3, 5);
    add<float, float> a2(3.4, 6);
    add<int> a3(2, 4);
    add<char>a('F', 4);
    return 0;
}