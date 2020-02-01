//UNIONS are like structs, however, you can only initialize one output at a time.
//It stores the data in the same memory address, that's why it overwrites the data you initialize
//You can use unions to save space.
#include <iostream>
#include <cstring>
using namespace std;

union person
{
    int id1;
    int id2;
};

person records; //union type def

int main()
{
    records.id1 = 100;
    cout<<records.id1<<"\n";

    records.id2 = 200;
    cout<<records.id2<<"\n";

    cout<<records.id1<<"\n"; //original value is gone
}
