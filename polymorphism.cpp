//polymorphism is allowing you to use the same functions but with different outcomes.
#include <iostream>
using namespace std;

class Enemy
{
protected:
    int attackPower;
public:
    void setAttackPower(int a)
    {
        attackPower = a;
    }
};

class Ninja: public Enemy //inheritance
{
public:
    void attack()
    {
        cout<<"I am a ninja, ninja chop! -" <<attackPower<<endl;
    }
};

class Monster: public Enemy //inheritance
{
public:
    void attack()
    {
        cout<<"I am a monster, I am eating you! -" <<attackPower<<endl;
    }
};

int main()
{
    //instance of class object
    Ninja Ben;
    Monster Eric;

    Enemy *enemy1 = &Ben;
    enemy1->setAttackPower(29);//use the -> when using a pointer. it's like the dot(.) operator
    Ben.attack();

    Enemy *enemy2 = &Eric;
    enemy2->setAttackPower(99);
    Eric.attack();
}
