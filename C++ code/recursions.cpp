#include<iostream>
using namespace std;
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n-1);
}

int fibbonachi(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fibbonachi(n-2) + fibbonachi(n-1);
}
int main()
{
    int n;

    cout<<"Enter nubmer ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n);
    cout<<"The fibbonachi sequence for "<<n<<" is "<<fibbonachi(n);



    return 0;
}

