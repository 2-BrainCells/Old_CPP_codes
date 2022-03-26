#include<iostream>
using namespace std;

int houses()
{
    int n;
    cout<<"Enter the number of houses on the street = ";
    cin>>n;
    return n;
}

void trashcan(int n)
{
    int a[100];
    cout<<"If the house has a trash can outside then enter 1 else 0 "<<endl;
    for (int i = 0;i < n;i++)
    {
        cout<<"Does house "<<i +1<<" has a trash can = ";
        cin>>a[i];
    }
    distance(a,n);
}
void distance(int a[100], int n)
{ 
    int s,i,j;
    for (i = 0; i < n; i++ )
    {
        if (a[i] == 1)
         s = 0; 
        else 
         for(j = i; j > 0; j--)
         {
             if (a[j] == 1)
             s = 0;
             else
             s++;

         } 
        cout<<s; 
    }
}


int main()
{
    int n1, ar[100];
    n1 = houses();
    trashcan(n1);
    return 0;
}