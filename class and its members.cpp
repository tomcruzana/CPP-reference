#include <iostream>
using namespace std;

class Player
{
    public: //public mode. In this way, the entire program can access the class members.
    int level;
    float HP;
    float stamina;

};

Player P1;
int main()
{
    //we can initialize the members in class or here:
    P1.level = 1;
    P1.HP = 100.00;
    P1.stamina = 100.00;

    //output
    cout<<P1.level<<endl;
    cout<<P1.HP<<endl;
    cout<<P1.stamina<<endl;
}
