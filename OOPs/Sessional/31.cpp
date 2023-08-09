#include <iostream>
#include <string.h>
using namespace std;
class player
{
    int no;
    string name;
    int *numberOfGoals;
    int *numberOfMatches;

public:
    player()
    {
        this->no = 0;
        this->name = "NULL";
        this->numberOfGoals = 0;
        this->numberOfMatches = 0;
    }
    player(int no, string name)
    {
        this->no = no;
        this->name = name;
        this->numberOfGoals = 0;
        this->numberOfGoals = new int[5];
        this->numberOfMatches = new int[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> this->numberOfGoals[i];
        }
        for (int i = 0; i < 5; i++)
        {
            cin >> this->numberOfMatches[i];
        }
    }
    ~player()
    {
        cout << this->no << endl
             << this->name << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << this->numberOfGoals[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << this->numberOfMatches[i] << " ";
        }
    }
};
int main()
{
    player p(14, "Abhinav");
    return 0;
}