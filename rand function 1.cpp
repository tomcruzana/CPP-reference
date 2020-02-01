#include <iostream>
#include <stdlib.h> //sometimes you need this for the rand
using namespace std;

int main()
{
    int num = rand();
    cout<<num<<endl;
    num = rand() % 100; //in range of 100
    cout<<num<<endl;

    return 0;
}

//http://www.cplusplus.com/reference/cstdlib/rand/
