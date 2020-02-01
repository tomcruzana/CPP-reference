#include <iostream>
#include <cstring>
using namespace std;

class nifty
{
    //private by default
    static const int arSize = 30;
    char personality[arSize];
    int talents;

public: //needs to be public so it can be accessed outside the class
    nifty();
    nifty(const char *s);
    friend ostream & operator<<(ostream & os, const nifty & n); //needs to be a friend method to access the class content
};

nifty::nifty() //use double :: to access the nifty class
{
    personality[0] = '\0'; //use this for null
    talents = 0;
}

nifty::nifty(const char * s)
{
    strcpy(personality, s);
    talents = 0;
}

ostream & operator<<(ostream & os, const nifty & n)
{
    os<<n.personality<<endl;
    os<<n.talents<<endl;
    return os;
}
