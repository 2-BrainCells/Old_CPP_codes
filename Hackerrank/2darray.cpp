#include <iostream>
using namespace std;

void enter(int a[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
}

void display(int a[100][100], int n)
{
    for(int i = 0 ; i < n ;i++)
    {
        for(int j = 0; j < n ; j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
}
void hourglass(int a[100][100], int n)
{
    
}
int main()
{
    int a[100][100], n;
    cin>>n;
    enter(a, n);
    display(a, n);

    return 0;
}