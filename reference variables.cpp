// firstref.cpp -- defining and using a reference
#include <iostream>
using namespace std;

int main()
{
int rats = 101;
int & rodents = rats; // rodents is a reference variable
cout << "rats = " << rats;
cout << ", rodents = " << rodents << "\n";
rodents++;
cout << "rats = " << rats;
cout << ", rodents = " << rodents << "\n";
// some implementations require type casting the following
// addresses to type unsigned
cout << "rats address = " << &rats;
cout << ", rodents address = " << &rodents << "\n";
return 0;
}
