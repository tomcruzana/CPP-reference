
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Guess my favorite number"<<endl;
    do
    {
        cin>>num;
    }while(num != 5);

    cout<<"Yes, that's my favorite number!"<<endl;
    return 0;
}
