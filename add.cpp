#include <iostream>
using namespace std;

int addCrap(int a , int b)
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
