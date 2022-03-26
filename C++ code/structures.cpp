#include<iostream>
using namespace std;

typedef struct employee
{
    
    int eId;
    char favChar;
    float salary;
}ep;

// unions

union money
{
    int rice;      // 4 bytes
    char car;      // 1 bytes
    float pounds;  // 4 bytes
};


int main()
{
    enum Meal {breakfast, lunch , dinner};
    cout<<breakfast;   // 0
    cout<<lunch;   // 1
    ep harry;
    union money m1;
    m1.rice = 34;
    m1.car = 'C';
    cout<<m1.rice<<endl; // garbage value  // can only initialise one variabele at a time 
    cout<<m1.car<<endl; 
    harry.eId = 1;
    harry.favChar = 'C';
    harry.salary = 120000;
    cout<<harry.salary<<endl;
    cout<<harry.eId<<endl;
    cout<<harry.favChar<<endl;


    return 0;
}