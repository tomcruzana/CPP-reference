#include <iostream>
using namespace std;

void other();

namespace Jill //create namespace
{
double bucket(double n);
double fetch = 100.1;
int Hill = 200;
}

using Jill::fetch; // put fetch into global namespace

int main()
{
cout<<::fetch<<endl; //this one is using the using declaration
cout<<Jill::Hill;
}
