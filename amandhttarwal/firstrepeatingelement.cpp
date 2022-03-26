#include <iostream>
using namespace std;
void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void firstrepeatingelement(int a[100], int n)
{
    
    for(int i = 0 ; i < n ; i++)
    {
        int repeat = a[i];
        for (int j = 0 ; j < n ; j++)
        {
            if(repeat == a[j] && j != i)
            {
            cout<< "The lowest repeat is at = "<< j;
            break;                       
            }
        }    
    }
}
int main()
{
    int a[100], n;
    cin >> n;
    enter(a, n);
    firstrepeatingelement(a, n);
    return 0;
}