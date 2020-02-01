/*
The Class
The class is the C++ vehicle for translating an
abstraction to a user-defined type. It combines
data representation and methods for manipulating
that data into one neat package. Let's look at a
class that represents stocks. First, we have to
think a bit about how to represent stocks.
*/

// beginning of stocks.cpp file
#include <iostream>
using namespace std;

class Stock // class declaration
{
private:
char company[30];
int shares;
double share_val;
double total_val;
void set_tot() { total_val = shares * share_val; }

public:
void acquire(const char * co, int n, double pr);
void buy(int num, double price);
void sell(int num, double price);
void update(double price);
void show();
}; // note semicolon at the end
//////////////////////////////////////////////////

//There are three accessors that I'm aware of: public, protected and private.

class Base {
    public:
        int publicMember;
    protected:
        int protectedMember;
    private:
        int privateMember;
};
/*
Everything that is aware of Base is also aware that Base contains publicMember.
Only the children (and their children) are aware that Base contains protectedMember.
No one but Base is aware of privateMember.
By "is aware of", I mean "acknowledge the existence of, and thus be able to access".
*/

int main()
{
    Stock greed; //class instance

    Base BaseInstance; //base instance
    BaseInstance.publicMember = 100; // you need the class instance to modify or initialize its members.
    //BaseInstance.protectedMember = 200; this will generate an error, bec it is protected. using a private member will also generate an error msg.

cout<< BaseInstance.publicMember;
}
