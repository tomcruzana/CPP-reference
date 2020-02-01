/*
A constructor is a kind of member function that
initializes an instance of its class. A constructor
has the same name as the class and no return value.
A constructor can have any number of parameters and
a class may have any number of overloaded constructors.
Constructors may have any accessibility, public, protected
or private. If you don't define any constructors,
the compiler will generate a default constructor that
takes no parameters; you can override this behavior by
declaring a default constructor as deleted.
*/

#include <iostream>
using namespace std;

class Contained1
{
public:
    Contained1() //constructor in public
    {
        cout << "Contained1 constructor." << endl;
    }
};

class Contained2
{
public:
    Contained2() //constructor in public
    {
        cout << "Contained2 constructor." << endl;
    }
};

class Contained3
{
public:
    Contained3() //constructor in public
    {
        cout << "Contained3 constructor." << endl;
    }
};

class BaseContainer
{
public:
    BaseContainer() //constructor in public
    {
        cout << "BaseContainer constructor." << endl;
    }
private:
    Contained1 c1;
    Contained2 c2;
};

class DerivedContainer : public BaseContainer {
public:
    DerivedContainer() : BaseContainer() {
        cout << "DerivedContainer constructor." << endl;
    }
private:
    Contained3 c3;
};

int main() {
    DerivedContainer dc;
    int x = 3;
}
