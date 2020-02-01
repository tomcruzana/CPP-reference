#include <iostream>
using namespace std;

float ans = 99.88;

int main()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);//makes cout print floats with a fixed number of decimals.
    cout<<ans;
}
