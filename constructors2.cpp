//constructor & destructor
#include <iostream>
using namespace std;

class player_rec
{
private:
    int age;
    int level;
    string name;

public:
    player_rec() //So you create a constructor to set default values for its member data and methods. easy enough
    {
        cout<<"This constructor has been summoned!"<<endl;
        age = 1;
        level = 1;
        name = "Tom";
        cout<<age<<endl<<level<<endl<<name<<endl;
    }

    ~player_rec()
    {
        cout<<"destructor has been invoked!";
        //this is where you will free allocated memory.
        //it's our responsibility to code this
    }
};

int main()
{
    player_rec player1;

}
