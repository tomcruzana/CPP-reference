#include <iostream>
using namespace std;

int var = 900;
int *p_var = &var;

int main()
{
    //show linked variable and pointer values in two ways.
    cout<<"The value of var is: "<<var<<endl;
    cout<<"The value of (pointer) p_var is: "<<*p_var<<endl;

    //express variable address in two ways.
    cout<<"The address of var is: "<<&var<<endl;
    cout<<"The address of p_var is: "<<p_var<<endl;
}
