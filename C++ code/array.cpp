#include<iostream>
using namespace std;
 
int main()
{
    int marks[] ={23 ,43 ,2 ,32};
    /*cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;*/
    
    for (int  i = 0; i < 4; i++)
    {
        cout<<marks[i]<<endl;
    }

    cout<<endl;
    int i =0;
    while (i<4)
    {
        cout<<marks[i]<<endl;
        i++;
    }
    
    cout<<endl;

    i=0;  

    do{
        cout<<marks[i]<<endl;
        i++;

    }while(i<4);


    //pointer array

    int *ar = marks;
    cout<<"The address of marks "<<ar<<endl;
    cout<<"Thw marks of marks[0] "<<*ar<<endl;
    cout<<"Thw marks of marks[1] "<<*ar+1<<endl;
    cout<<"Thw marks of marks[2] "<<*ar+2<<endl;
    cout<<"Thw marks of marks[3] "<<*ar+3<<endl;

    return 0;
}