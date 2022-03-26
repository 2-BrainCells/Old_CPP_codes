#include <iostream>
using namespace std;

int main()
{
    int c, p;
    cin >> c;
    cin >> p;
    for (int i = 0; i < c; i++)
    {
        char name[20];
        int nskills;
        cin >> nskills;
        cin.get(name, 20);
        for (int j = 0; j < nskills; j++)
        {
            char skills[20];
            int level;
            cin.get(skills, 20);
            cin >> level;
        }
    }
    return 0;
}