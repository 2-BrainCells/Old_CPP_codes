// #include <iostream>
// using namespace std;
// class student
// {
//     int rollNumber;
//     string name;
//     int marks[5];

// public:
//     void getData()
//     {
//         cout << "Enter the roll number = ";
//         cin >> rollNumber;
//         cout << "Enter the name = ";
//         getline(cin >> ws, name);
//         cout << "Enter Marks ";
//         for (int i = 0; i < 5; i++)
//         {
//             cin >> marks[i];
//         }
//     }
//     void calculation()
//     {
//         cout << "The name of the student is  = " << name;
//         cout << "The roll number of the student is = " << rollNumber << endl;
//         int total = 0;
//         float percentage;
//         for (int i = 0; i < 5; i++)
//         {
//             total += marks[i];
//         }
//         percentage = total / 5;
//         cout << "The total and the percentage is = " << total << " " << percentage << "%";
//     }
// };

// int main()
// {
//     student s;
//     s.getData();
//     s.calculation();
//     return 0;
// }

#include <iostream>
#include <math.h>
using namespace std;
string isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        // Write your logic here
        // Return "Yes" if n is prime, else return "No"
        /*n is prime only if it is not divisible by any i.
        We will not reach till n and 1 is already discarded*/
        if (n % i != 0)
        {
            return "Yes";
        }
        return "No";
    }
}
int main()
{
    int n;
    cin >> n;
    cout << isPrime(n) << endl;
    return 0;
}