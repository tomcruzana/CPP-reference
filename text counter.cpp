// textin1.cpp -- reading chars with a while loop
//this program stops when the # is encountered
#include <iostream>
using namespace std;
int main()
{
char ch;
int count = 0; // use basic input
cin >> ch; // get a character
//cin.get(ch); // use the cin.get(ch) function. it will count spaces

while (ch != '#') // test the character
{
cout << ch; // echo the character
count++; // count the character
cin >> ch; // get the next character
}

cout << "\n" << count << " characters read\n";
return 0;
}
