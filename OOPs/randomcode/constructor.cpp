// // #include <iostream>
// // using namespace std;

// // //  constructor in private section
// // class A
// // {
// //     A()
// //     {
// //         cout << "Constructor of A is called" << endl;
// //     }

// // public:
// //     friend class B;
// // };
// // class B
// // {
// // public:
// //     B()
// //     {
// //         A a1;
// //         cout << "Constructor of B is called";
// //     }
// // };
// // int main()
// // {
// //     B b1;
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;
// // class construct
// // {
// //     int a;

// // public:
// //     construct()
// //     {
// //         a = 0;
// //         cout << a << endl;
// //     }
// //     construct(const construct c)
// //     {
// //         a = c.a;
// //         cout << a;
// //     }
// // };
// // int main()
// // {
// //     construct c, c1(c);
// //     return 0;
// // }
// // #include <iostream>
// // using namespace std;
// // class Array
// // {
// //     int *arr;
// //     int n;

// // public:
// //     Array()
// //     {
// //         n = 0;
// //     }
// //     Array(int);
// //     void show_data();
// // };
// // Array ::Array(int num)
// // {
// //     n = num;
// //     arr = new int[n];
// //     cout << "Enter the elements : ";
// //     for (int i = 0; i < n; i++)
// //     {
// //         cin >> arr[i];
// //     }
// // }
// // void Array ::show_data()
// // {
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout << " " << arr[i];
// //     }
// // }
// // int main()
// // {
// //     int size;
// //     cout << "Enter the size of the array - ";
// //     cin >> size;
// //     Array Arr(size);
// //     Arr.show_data();
// //     return 0;
// // }

// // shallow copy

// // In shallow copy, an object is created by simply copying the data of all variables of the original object.

// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     cout << rand() % 6 + 1 << endl;
// //     cout << rand() % 101;
// //     return 0;
// // }

// #include <iostream>
// using namespace std;
// class Arr
// {
//     int len, *address;

// public:
//     Arr()
//     {
//         len = 0;
//         address = new int;
//     }
//     Arr(int x)
//     {
//         len = x;
//         address = new int[len];
//         for (int i = 0; i < len; i++)
//         {
//             address[i] = rand() % 101;
//         }
//     }
//     void add_Arr(Arr x, Arr &y)
//     {
//         len = x.len + y.len;
//         delete address;
//         address = new int[len];
//         for (int i = 0; i < len; i++)
//         {
//             if (i < x.len)
//             {
//                 address[i] = x.address[i];
//             }
//             else
//             {
//                 address[i] = y.address[i - x.len];
//             }
//         }
//     }
//     ~Arr()
//     {
//         delete address;
//     }
//     void display()
//     {
//         for (int i = 0; i < len; i++)
//         {
//             cout << address[i] << ", ";
//         }
//     }
// };
// int main()
// {
//     Arr a(5), b(3), c;
//     c.add_Arr(a, b);
//     a.display();
//     cout << endl;
//     b.display();
//     cout << endl
//          << "After adding  ";
//     c.display();
//     return 0;
// }

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    bool c = true;
    int n = 21;
    for (int i = 2; i <= sqrt(n); i++)
    {
        // Write your logic here
        // Return "Yes" if n is prime, else return "No"
        /*n is prime only if it is not divisible by any i.
        We will not reach till n and 1 is already discarded*/
        if(n <= 1)
        {
            return false;
        }
        if (n % i == 0)
        {
            return false;
        }
    }
    if (c == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}