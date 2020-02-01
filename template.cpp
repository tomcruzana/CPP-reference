#include <iostream>
using namespace std;

class kaibigan
{
    string name;
    int age;
    string address;
    float salary;

public:
    kaibigan();
    void record();
    friend void ketket();
};
//definitions
kaibigan::kaibigan()
{
    name = "Ben";
    age = 24;
    address = "Bellingham, WA";
    salary = 10.30;
    record();
}

void kaibigan::record()
{
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<address<<endl;
        cout<<salary<<endl;
}
//non member function

void ketket()
{
        cout<<"Copied..."<<endl;
        cout<<kaibigan.age<<endl;
}

int main()
{

kaibigan Ben;
ketket();
}
