//polymorphism is allowing you to use the same functions but with different outcomes.
#include <iostream>
using namespace std;

class Enemy
{

public:
    virtual void attack(){} //virtual is like a template. compiler will ignore this.
    //different function with the same type but different output!
    //src: https://www.youtube.com/watch?v=DudHooleNVg&ebc=ANyPxKocS87a_qQRrlVpmyTHl19iP21-QhvJrgTrY9xImmQU1s_vQ3R4CXK8chN91cbjn1ZRCmjj4R59oYwJfUbbJhwE7uxR_Q
};

class Ninja: public Enemy //inheritance
{
public:
     void attack()
     {
         cout<<"ninja attack!"<<endl;
     }
};

class Monster: public Enemy //inheritance
{
public:
     void attack()
     {
         cout<<"monster attack!"<<endl;
     }
};

int main()
{
    Ninja ninjaObj;
    Monster monsterObj;

    //now we assign the enemy class to the class object instance address
    Enemy *enemy1 = &ninjaObj;
    Enemy *enemy2 = &monsterObj;

    enemy1->attack();//compiler will find the appropriate function.
    enemy2->attack();
}
