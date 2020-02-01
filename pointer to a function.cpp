/*
use. To implement this plan, you need to be able to do the following:
• Take the address of a function.
• Declare a pointer to a function.
• Use a pointer to a function to invoke the function.
*/

/*Obtaining the Address of a Function
Taking the address of a function is simple:
just use the function name without trailing parentheses.
That is, if think() is a function, then think is the address of the function. */

#include <iostream>
using namespace std;

double pam(int); //prototype

//Here's what a declaration of an appropriate pointer type looks like:
double (*pf)(int); // pf points to a function that takes
// one int argument and that
// returns type double


int main()
{
    pf = pam; //pf now points to pam function (this needs to be inside the main func

    //here's how you call 'em!
    double x = pam(4); // call pam() using the function name
    cout<<x<<endl;

    double y = (*pf)(5); // call pam() using the pointer pf
    cout<<y<<endl;

    //Actually, C++ also allows you to use pf as if it were a function name:
    double z= pf(5); // also call pam() using the pointer pf
    cout<<z<<endl;
}

double pam(int x)
{
    cout<<"I've been summoned! "<<endl;
    return x + 0;
}
