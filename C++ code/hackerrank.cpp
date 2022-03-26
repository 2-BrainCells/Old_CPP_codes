#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student
{
    int scores[100][100];
    int n;
    int sum[100];
    public: 
    void input()
    {
        cin>> n;
        for(int i = 0; i < n ; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                // cout<<"Enter the "<< j +1 <<" th score for the " <<i + 1 <<" th applicant = " ;
                cin>>scores[i][j];
            }
        }
    }
    
    void calculateTotalScore()
    {
        for(int i = 0; i < n ; i++)
        { 
            sum[i] = 0;

            for(int j = 0 ; j < 5 ; j++ )
            {
                sum[i] = sum[i] + scores[i][j];
                
            }
            // cout<<sum[i] << " " ;
        }
    }
    void compare()
    {
        int k = 0;
        for(int i = 1; i < n ; i++)
        {
            if (sum[0] < sum[i])
            {
                k++;
            } 
        }
        cout<<k;
    }
};

int main() 
{
    Student s;
    s.input();
    s.calculateTotalScore();
    s.compare();
    return 0;
}
