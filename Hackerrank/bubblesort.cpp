#include <iostream>
#include <vector>
using namespace std;
template <class T>
void enter(vector<T> &v)
{
    int n;
    cin >> n;
    int element;
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        v.push_back(element);
    }
}
template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
}
template <class T>
void bubblesort(vector<T> &v)
{
    int numberOfSwaps = 0;
    for (int i = 0; i < v.size(); i++)
    {

        for (int j = 0; j < v.size() - 1; j++)
        {

            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                numberOfSwaps++;
            }
        }

        if (numberOfSwaps == 0)
        {
            break;
        }
    }
    cout << "Array is sorted in " << numberOfSwaps << " swaps" << endl;
    cout << "First Element: " << v[0] << endl;
    cout << "Last Element: " << v[v.size() - 1];
}
int main()
{
    vector<int> v;
    enter(v);
    bubblesort(v);
    return 0;
}