#include<iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<< " ";
    }
}
int main()
{
    vector <int> vec1;
    // int element, n;
    // cout<<"Enter the size of the vector = ";
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //    cout<<"enter the element = ";
    //    cin>> element;
    //    vec1.push_back(element);
    // }
    // vec1.pop_back(); // remove the last added element
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter/*insert where*/, 5/*insert a copy*/ , 566/*value to be inserted*/);

    //erase function

    // ways to create a vector 
    vector <int> vec2(4); // 4 element size int
    vector <char> vec3(4); // 4 element size char
    vector <char> vec4(vec3); // 4 elemnet character vector from vec 3
    vector <int > vec5(6, 3);
    vec3.push_back('S');
    display(vec2);
    display(vec3);
    display(vec5); // printing 3 six times.
    return 0;
} 