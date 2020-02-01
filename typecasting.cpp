#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int z = 7;
    char text = 'a';

    cout<<(double)x / z<<endl; //we convert it to get the exact result.
    cout<<(int)text; // the value of a is 97
    //or
    cout<<endl<<endl<<endl;
    cout<<static_cast<int>(text);//c++ version of typecasting/converting
}
