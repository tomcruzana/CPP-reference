/*
cin.get gets one char only
cin.getline gets a c-string
getline gets an std::string
*/

#include <iostream>
#include <cstring> // header for strings
using namespace std;


int main()
{
    cout<<"What is your favorite country?\n";
    char country[15];
    cin.getline(country, 15); //instead of using cin, getline will not read white spaces as a /0 null character.
                              //That means the strings will be concatenated.
    cout<<"Wow! "<<country<<" is an awesome country!";
}
