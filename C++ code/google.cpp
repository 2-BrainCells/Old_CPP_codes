#include<iostream>
using namespace std;
void goodness(int n, char st[100])
{
    int k ,i, j , s = 1;
    cout<<"Enter the value of goodness ratio = ";
    cin>>k;
    cout<<endl;
    int n1 = n/2;

    
    for(i = 1, j = n ;i <= n1, j > n1; i++, j--)
    {
        if (st[i] == st[j])
        {
            cout<<st[i]<<endl;
            cout<<st[j]<<endl;
            s++;
        }
        else
        {
            continue;
        }

    }
    cout<<"Number of permutation to be made in order to achieve goodness value of string= "<<s-1;

}


void enter()
{
    int n , i , k;
    char st[100];
    cout<<"Enter the range of the array = ";
    cin>>n;
    cout<<endl;
    for (i = 1; i <= n; i++)
    {
        cout<<"Enter the value of the string = ";
        cin>>st[i];
    }
    goodness(n,st);
}



int main()
{ 
   int n;
   char st[100]; 
   enter();
   cout<<endl;
   return 0;
}