#include <iostream>
using namespace std;
template <class T>
class multiply
{
    T *arr;
    int n;

public:
    multiply(T multi)
    {
        cin >> this->n;
        this->arr = new T[n * n];
        for (int i = 0; i < this->n * this->n; i++)
        {
            cin >> this->arr[i];
        }
        for (int i = 0; i < this->n * this->n; i++)
        {
            this->arr[i] = this->arr[i] * multi;
        }
    }
    ~multiply()
    {
        for (int i = 0; i < this->n * this->n; i++)
        {

            cout << this->arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    multiply<int> m1(2);
    multiply<float> m2(2.5);
    return 0;
}