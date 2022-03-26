#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference
{
private:
    vector<int> elements;

public:
    int maximumDifference;
    Difference(vector<int> a)
    {
        for (int i = 0; i < a.size(); i++)
        {
            elements.push_back(a[i]);
        }
    }
    int computeDifference()
    {
        maximumDifference = elements[elements.size() - 1] - elements[0];
        // vector<int> t;
        // for (int i = 0; i < elements.size(); i++)
        // {
        //     int c = abs(elements[elements.size() - 1] - elements[0]);
        //     cout<<c<<endl;
        //     t.push_back(c);   //abs(elements[i] - elements[i + 1]);
        // }
        // for (int i = 0; i < t.size(); i++)
        // {
        //     cout<<t[i];   //abs(elements[i] - elements[i + 1]);
        // }
        // int maximumDiffernce = t[0];
        // for (int i = 0; i < t.size(); i++)
        // {
        //     if (t[i] > maximumDifference)
        //     {
        //         maximumDifference = t[i];
        //         return maximumDifference;
        //     }
        // }
    }
}; // End of Difference class

int main()
{
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++)
    {
        int e;
        cin >> e;

        a.push_back(e);
    }
    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}