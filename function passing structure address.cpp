//C++ Passing Struct Address

#include <iostream>
using namespace std;

struct stuff
{
   int one;
   int two;
};

void multiply(stuff* pm)
{
    cout << pm->one * pm->two;
}

int main()
{
    stuff* fnc = new stuff;
    fnc->two = 1;
    fnc->one = 2;
    multiply(fnc);
    delete fnc;
    cin.ignore(1000, 10);
    return 0;
}
