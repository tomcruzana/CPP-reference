#include <iostream>
using namespace std;
int x; //auto variable by default, static duration external linkage.
//that means it can be linked to another source-code
static int one = 50; //static duration, internal linkage/external


int main()
{
auto int zxx; // explicitly auto, scope is only in a block
register int y; //register variable, scope is within a block only
}
