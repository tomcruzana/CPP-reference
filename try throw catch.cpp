#include <iostream>
using namespace std;

int main()
{
    string password = "password123";

    cout<<"Please enter your password:"<<endl;
    cin>>password;

    try
    {
        if(password == "password123")
        {
            cout<<"Access granted";
        }
        else
        {
            throw 999;
        }
    }
    catch(int x)
    {
        cout<<"Fuck! You entered an incorrect password. Err code: "<<x;
    }
}
