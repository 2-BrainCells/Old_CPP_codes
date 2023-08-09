/*Create a class to store an integer array1. Overload insertion and extraction operator to input and display the array1 elements.*/

// using static array1
// error in gdb online as stack smashing

#include <iostream>

using namespace std;

class array1
{
	int n;
	int arr[];

public:
	array1()
	{
		n = 0;
		arr[n] = {};
	}
	friend istream &operator>>(istream &, array1 &);
	friend ostream &operator<<(ostream &, const array1 &);
	~array1() {}
};

istream &operator>>(istream &in, array1 &a1)
{
	cout << "How many elements you want in the array ?" << endl;
	in >> a1.n;
	a1.arr[a1.n];
	cout << "Enter the elements" << endl;
	int i;
	for (i = 0; i < a1.n; i++)
		in >> a1.arr[i];
	return in;
}

ostream &operator<<(ostream &out, const array1 &a1)
{
	out << "Array = ";
	int i;
	for (i = 0; i < a1.n; i++)
		out << a1.arr[i] << " ";
	out << endl;
	return out;
}
int main()
{
	array1 a1;
	cin >> a1;
	cout << a1;
	return 0;
}
