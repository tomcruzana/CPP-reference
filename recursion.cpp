/*different. A C++ function has the interesting
characteristic that it can call itself.
(Unlike C, however, C++ does not let main() call itself.)
This ability is termed recursion. Recursion is an important tool in certain types of programming,
such as artificial intelligence, but we'll just take a superficial look artificial shallowness at how it works.*/

// recur.cpp -- use recursion
#include <iostream>
using namespace std;

void countdown(int n); //prototype

int main()
{
countdown(4); // call the recursive function and give it a var arg of 4
return 0;
}

void countdown(int n)
{
cout << "Counting down ... " << n << "\n";
if (n > 0) //so if 4 > 0, the . . .
countdown(n-1); // function calls itself
cout << n << ": Kaboom!\n";
}
