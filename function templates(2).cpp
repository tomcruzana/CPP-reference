#include <iostream>
using namespace std;

template <class calc> //generic type of data //it's like var in js, i guess
calc addCrap(calc a , calc b)
{
    return a + b;
}

int main()
{
    int a,b,z;
    cin>>a;
    cin>>b;
    z = addCrap(a,b);
    cout<<z<<endl;
}
