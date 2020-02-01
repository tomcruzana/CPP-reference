#include <iostream>
using namespace std;

int main()
{
int sonAge = 31;
int momAge = 12;

    try
    {


        if(sonAge > momAge)
        {
            throw 99; //you can put any number here.
            //the number will represent the error code
        }
    }
        catch(int x)//the catch func int parameter will catch the throw int#
        {
            cout<<"Error description: Son cant be older than mom: "<<x<<endl;
        }

}

//src: http://www.tutorialspoint.com/cplusplus/cpp_exceptions_handling.htm

/*
Exceptions provide a way to transfer control from one part of a program to another. C++ exception handling is built upon three keywords: try, catch, and throw.

throw: A program throws an exception when a problem shows up. This is done using a throw keyword.

catch: A program catches an exception with an exception handler at the place in a program where you want to handle the problem. The catch keyword indicates the catching of an exception.

try: A try block identifies a block of code for which particular exceptions will be activated. It's followed by one or more catch blocks.
*/
