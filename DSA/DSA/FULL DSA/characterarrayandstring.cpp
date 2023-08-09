// #include <iostream>
// #include <algorithm>
// #include <string.h>
// using namespace std;
// // converting uppercase to lowercase
// char toLowerCase(char ch)
// {
//     if (ch >= 'a' && ch <= 'z')
//     {
//         return ch;
//     }
//     else
//     {
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }
// int main()
// {
//     // char a = 'z';
//     // cout << a << " ";
//     // char arr[10];
//     // cin >> arr;
//     // cout << arr;
//     char b[10] = {"racecr"};
//     int n = 6;
//     int s = 0, e = n - 1;
//     while (s < e)
//     {
//         swap(b[s++], b[e--]);
//     }
//     cout << b << endl;
//     bool check = true;
//     for (int i = 0, j = n - 1; i <= j; i++, j--)
//     {
//         if (b[i] != b[j])
//         {
//             check = false;
//         }
//     }
//     if (check == false)
//     {
//         cout << "Not a Palindrome" << endl;
//     }
//     else
//     {
//         cout << "Palindrome" << endl;
//     }
//     cout << toLowerCase('B');
//     string str ;
//     cin >> str;
//     cout << str;
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    char c[] = {"home"};
    char *c1;
    c1 = new char[100];
    c1 = c;
    cout << *c1;
    return 0;
}