#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lisst)
{
    list<int>::iterator it;
    for (it = lisst.begin(); it != lisst.end(); it++)
    {
        cout << *it << " ";  
    }
    cout<<endl;
}
int main()
{
    list<int> list1;    // list of 0 lenght
    list<int> list2(3); // Empty list of sixe 7;
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(4);
    list1.push_back(3);
    list1.push_back(8);

    display(list1);

    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 12;
    iter++;
    display(list2);


    //  sorting trh list;
    list1.sort();
    display(list1);

    // merging the list

    list1.merge(list2);
    display(list1);
    return 0;
}