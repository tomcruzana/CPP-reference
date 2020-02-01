#include <iostream>
using namespace std;

struct profile
{
    char name[20];
    int level;
    float health;
};



int main()
{
    //instance or variable of the profile structure
    profile Edward =
    {
        "Edwardo",
        3,
        100
    };

    profile Eliza = {"Eliza", 8, 50};

    profile Benjamin =
    {
        "Benj",
        99,
        100

    };

//output
    cout<<Edward.name<<", "<<Edward.level<<", "<<Edward.health<<"\n";
    cout<<Eliza.name<<", "<<Eliza.level<<", "<<Eliza.health<<"\n";
    cout<<Benjamin.name<<", "<<Benjamin.level<<", "<<Benjamin.health<<"\n";
    return 0;
}
