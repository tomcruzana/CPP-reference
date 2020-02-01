#include <iostream>
#include <string.h>

using namespace std;

const int arSize = 20;

int main()
{
    cout<<"Enter your name"<<endl;
    char name[arSize];
    cin>>name;

    for(int ctr = strlen(name) - 1; ctr >= 0; ctr--)

        cout<<name[ctr];


    return 0;
}
