//using rand() function

#include <iostream>
#include <stdlib.h> //sometimes you need this for the rand
using namespace std;


void dragonBurst();


int main()
{
    dragonBurst();
}


void dragonBurst()
{

    for (int ctr = 0; ctr < 30; ctr++)
    {
        int fire = rand() % 100;
        cout<<"The dragon is bursting flame! "<<"strength is: "<<fire<<endl;
    }
}
