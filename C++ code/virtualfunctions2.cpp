#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title =  s;
        rating = r;
    }
    void virtual display() = 0; // abstract class
};
class CWHvideo : public CWH
{
    int videolength;

public:
    CWHvideo(string s, float r, int vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amazing video " << title << endl;
        cout << "Rating " << rating << " out of 5 star" << endl;
        cout << "Lenght of this video " << videolength << " minutes" << endl;
    }
};
class CWHtext : public CWH
{
    int words;

public:
    CWHtext(string s, float r, int w) : CWH(s, r)
    {
        words = w;
    }
    void display()
    {
        cout << "This is an amazing video " << title << endl;
        cout << "Rating = " << rating << " out of 5 star" << endl;
        cout << "Number of words in " << words << " minutes" << endl;
    }
};
int main()
{
    string title;
    float rating ,vlen;
    int words;
    title = "Django tutorials";;
    vlen = 4.56;
    rating = 4.67;
    CWHvideo djVideo(title, rating , vlen);
    //djVideo.display();
    cout<<endl;
    title = "Django tutorials";;
    words = 1003;
    rating = 4.67;
    CWHtext djtext(title, rating , words);
    //djtext.display();

    CWH * tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    cout<<endl;
    tuts[1]->display();
    return 0;
}