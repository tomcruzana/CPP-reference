//Mixing string and number input

#include <iostream>
#include <cstring> // header for strings
using namespace std;


int main()
{
        cout<<"What year was your house built\n";
        int year;
        cin>>year;
        //
        cin.get(); // read new line
        /*
The istream class has another member function, called get(), which comes in several variations. One variant works much like getline(). It takes the same arguments, interprets them the same way, and reads to the end of a line. But rather
than read and discard the newline character, get() leaves that character in the input queue.

The call cin.get() (no arguments) reads the single next character, even if it is a newline, so you can use it to dispose of the newline and prepare for the next line of input. That is, this sequence works:
Another way to use get() is to concatenate, or join, the two class member functions as follows:
cin.get(name, ArSize).get(); // concatenate member functions
hat makes this possible is that cin.get(name, ArSize) returns the cin object, which then is used as the object that invokes the get() function. Similarly, the statement
cin.getline(name1, ArSize).getline(name2, ArSize);
reads two consecutive input lines into the arrays name1 and name2; it's equivalent to making two separate calls to cin.getline().
        */
        cout<<"What's your house address?\n";
        char houseAddress[20];
        cin.getline(houseAddress, 20);

        //output
        cout<<"Year built: "<<year<<"\n";
        cout<<"Address: "<<houseAddress;

        return 0;
}
