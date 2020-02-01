#include <iostream>
using namespace std;

template <class FIRST, class SECOND>

FIRST smaller(FIRST a, SECOND b)
{
    return (a<b?a:b);
}

int main()
{
    int x = 64;
    double y = 49.99;

    cout<<smaller(y,x)<<endl; //y will be assigned to FIRST & x will be assigned to int type
    //therefore the return type for the smaller function will be a double and the values will not be truncated.
}
