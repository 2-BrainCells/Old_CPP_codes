#include <iostream>
using namespace std;


void compare(int ar[100], int n)
{
  for(int i = 0; i<n ; i++)
  {
    if(ar[i]%2 == 0)
    cout<<ar[i]<<" "; 
    else
    cout<<" ";
  }
}

void value(int ar[100],int n)
{
for(int i=0; i<n ;i++ )
 {
   cout<<"Enter the value of the array = ";
   cin>>ar[i];
 }
 compare(ar,n);
}


int main()
{
int ar[100],n;
cout<<"Enter the limit of the array = ";
cin>>n;
value (ar,n);
}