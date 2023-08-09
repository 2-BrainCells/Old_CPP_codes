#include <iostream>
using namespace std;
void print(int *p)
{
    cout << *p << endl;
}
// void update(int *p)
// {
//     *p = *p + 1;
// }

void update(int **p)
{
    // p = p + 1;
    // *p = *p + 1;
    **p = **p + 1;
}

int main()
{
    // int num = 5;
    // int *p = &num;
    // cout << (*p)++ << " " << num << endl;
    // char ch = 'a';
    // char *c = &ch;
    // cout << c << " " << (ch++) << endl;
    // cout << sizeof(num) << " " << sizeof(c) << endl;

    // // coping a pointer
    // int *q = p;
    // cout << p << " " << q << endl;
    // cout << *p << " " << *q << endl;
    // int arr[10] = {2, 5, 7};
    // cout << *(arr + 3) + 1 << endl;
    // int *ptr = &arr[0];
    // cout << sizeof(arr) << endl;
    // cout << sizeof(ptr) << endl;

    // int a[20] = {1, 3, 5, 6};
    // // cout << a << endl;
    // // cout << &a << endl;
    // // cout << &a[0] << endl;

    // int *p = &a[0];
    // cout << p << endl;
    // // cout << *(p) << endl;
    // // cout << &p << endl;
    // // cout << a++ << endl;  Error
    // p = p + 1;
    // cout << p << endl;
    // return 0;

    // char array

    // int arr[5] = {1, 2, 3, 4, 5};
    // char ch[6] = "abcde";
    // cout << arr << " " << ch << endl;
    // // int array address , for character print entire content

    // char *c = &ch[0];
    // cout << ch << endl;
    // cout << "Hello" << endl;
    // cout << "Arpita ";
    // char *c = "abcdf"; Risky not recommended
    // entire string prints

    // Function

    // int val = 5;
    // int *ptr = &val;
    // print(ptr);
    // update(ptr);
    // print(ptr);

    // double pointer

    int value = 5;
    int *ptr = &value;
    int **ptr2 = &ptr;
    cout << 
    value << endl;
    cout << ptr << endl;
    // cout << &ptr << endl;
    cout << ptr2 << endl;
    // cout << &ptr2 << endl;
    update(ptr2);
    cout << value << endl;
    cout << ptr << endl;
    cout << ptr2 << endl;
}