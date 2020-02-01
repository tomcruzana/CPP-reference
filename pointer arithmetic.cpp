// addpntrs.cpp--pointer addition
#include <iostream>
using namespace std;

int main() {
double wages[3] = {10000.0, 20000.0, 30000.0};
short stacks[3] = {3, 2, 1};
// Here are two ways to get the address of an array
double * pw = wages; // name of an array = address
short * ps = &stacks[0]; // or use address operator

// with array element
cout << "pw = " << pw << ", *pw = " << *pw << "\n";
pw = pw + 1; cout << "add 1 to the pw pointer:\n";
cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
cout << "ps = " << ps << ", *ps = " << *ps << "\n";
ps = ps + 1; cout << "add 1 to the ps pointer:\n";
cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

cout << "access two elements with array notation\n";
cout << stacks[0] << " " << stacks[1] << "\n";
cout << "access two elements with pointer notation\n";
cout << *stacks << " " << *(stacks + 1) << "\n";

cout << sizeof wages << " = size of wages array\n";
cout << sizeof pw << " = size of pw pointer\n"; return 0;
}
