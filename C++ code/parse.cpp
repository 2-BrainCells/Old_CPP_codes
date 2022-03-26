#include<iostream>
#include<cstring>
using namespace std;
void parser(char string[])
{
    for(int i = 5; i < strlen(string) -5; i++ )
    {
        cout<<string[i];

    }

}
int main()
{
    char string[] = "<h1> This is a heading </h1>" ;
    <tag1 value = "value">;
    parser(string);
    return 0;
}