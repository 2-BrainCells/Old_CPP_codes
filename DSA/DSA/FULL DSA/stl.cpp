#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
using namespace std;
int main()
{
    // // array
    // array<int, 4> a = {1, 2, 5, 6};
    // int size = a.size();
    // for (int i = 0; i < size; i++)
    // {
    //     cout << a[i] << endl;
    // }
    // cout << "Element at 2nd Index = " << a.at(2);
    // cout << "Is Empty ? = " << a.empty() << endl;
    // cout << "Front Element and back Element = " << a.front() << " " << a.back();
    // ;

    // // vector
    // vector<int> v;
    // cout << v.size() << " " << v.capacity() << " ";
    // v.push_back(1);
    // cout << v.capacity() << endl;
    // v.push_back(2);
    // cout << v.capacity() << endl;
    // v.push_back(3);
    // cout << v.capacity() << endl;
    // cout << v.size() << endl;
    // v.pop_back();
    // // iterator
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    // // vector <int> v1(5, 1)
    // // initialise all elements with 1

    // // deque
    // deque<int> d;
    // d.push_back(1);
    // d.push_front(2);
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    // // d.pop_back();
    // // cout << endl;
    // // for (int i : d)
    // // {
    // //     cout << i << " ";
    // // }
    // // first element
    // cout << "First Element = " << d.at(1);
    // // erase function
    // d.erase(d.begin(), d.begin()+ 2);
    // for (int i : d)
    // {
    //     cout << i;
    // }

    // list
    // list<int> l;
    // l.push_back(1);
    // l.push_front(2);
    // for (int i : l)
    // {
    //     cout << i << " ";
    // }
    // cout << l.size() << endl;
    // list<int> n(l);
    // // copy a list;
    // for (int i : n)
    // {
    //     cout << i << " ";
    // }

    // // stack
    // stack<string> s;
    // s.push("HUE HUE");
    // s.push("OMFOO");
    // s.push("LOL");
    // cout << "Top Element = " << s.top() << s.size() << " ";
    // s.pop();
    // cout << s.top();

    // // queue
    // queue<string> q;
    // q.push("love");
    // q.push("Babbar");
    // q.push("kumar");
    // cout << q.front();
    // q.pop();
    // cout << q.front();

    // // priority queuw
    // // first element is greatest
    // // gretates element fetch
    // priority_queue<int> maxi;
    // priority_queue<int, vector<int>, greater<int>> mini;
    // maxi.push(1);
    // maxi.push(2);
    // maxi.push(3);
    // maxi.push(4);
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << maxi.top() << endl;
    //     maxi.pop();
    // }
    // mini.push(5);
    // mini.push(1);
    // mini.push(2);
    // mini.push(3);
    // mini.push(4);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << mini.top() << endl;
    //     mini.pop();
    // }

    // // set
    // set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(4);
    // s.insert(90);
    // s.insert(9);
    // // set<int>::iterator it = s.begin();
    // for (int i : s)
    // {
    //     cout << i << endl;
    // }
    // cout << s.count(3) << endl;
    // // finding iterator;
    // set<int>::iterator it = s.find(9);
    // for (auto i = it; i != s.end(); i++)
    // {
    //     cout << *i;
    // }
    // cout << endl;

    // map
    map<int, string> m;

    m[1] = "babbr";
    m[2] = "lobe";
    m[13] = "kumar";
    m.insert({5, "hue hue"});
    // key sorted
    for (auto i : m)
    {
        cout << i.first << endl;
    }

    return 0;
}