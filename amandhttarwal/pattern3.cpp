#include<iostream>
using namespace std;
int main()
{
    int n = 5, t = 1;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(i > j || i == j)
            {
                cout<<t<<" ";
                t++;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}