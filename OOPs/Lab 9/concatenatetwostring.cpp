#include <iostream>
#include <string.h>
using namespace std;
class charArray
{
    char *str;
    int size;

public:
    charArray()
    {
        this->size = 0;
        this->str = new char[this->size + 1];
    }
    charArray(char str[])
    {
        this->size = strlen(str);
        this->str = new char[this->size + 1];
        this->str = str;
    }
    charArray operator+(charArray s)
    {
        this->size = size + s.size;
        delete (this->str);
        this->str = new char[this->size + 1];
        strcpy(this->str, str);
        strcat(this->str, s.str);
        return *this;
    }
    charArray display()
    {
        cout << "The character array is  = ";
        cout << this->str;
        delete (this->str);
    }
};
int main()
{
    charArray s1("Hey"), s2(" Abhinav"), s3;
    s3 = s1 + s2;
    s3.display();
    return 0;
}