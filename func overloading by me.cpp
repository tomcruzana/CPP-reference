#include <iostream>
using namespace std;

class Doom
{
public:
    int function_call(int x)
    {
        return x * 2;
    }

    double function_call(double x)
    {
        return x * 2;
    }

    char function_call(char x)
    {
        return x * 2;
    }
};
int main()
{
    Doom Doom2;
    int z;
    double x;
    char v;

    z = Doom2.function_call(2);
    x = Doom2.function_call(3.6);
    v= Doom2.function_call('a'); // you can also use a number here since char is an int type

    cout<<z<<endl;
    cout<<x<<endl;
    cout<<v<<endl;
}
