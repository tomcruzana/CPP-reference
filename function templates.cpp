/*
Templates are the foundation of generic programming, which involves writing code
 in a way that is independent of any particular type.
A template is a blueprint or formula for creating a generic class or a function.
The library containers like iterators and algorithms are examples of generic
 programming and have been developed using template concept.
*/

/* General form:
template <class type> ret-type func-name(parameter list)
{
   // body of function
}
*/

#include <iostream>
#include <string>

using namespace std;

//function template
template <typename T>
inline T const& Max (T const& a, T const& b)
{
    return a < b ? b:a;
}

int main ()
{

    int i = 39;
    int j = 20;
    cout << "Max(i, j): " << Max(i, j) << endl;

    double f1 = 13.5;
    double f2 = 20.7;
    cout << "Max(f1, f2): " << Max(f1, f2) << endl;

    string s1 = "Hello";
    string s2 = "World";
    cout << "Max(s1, s2): " << Max(s1, s2) << endl;

   return 0;
}
