/*
The idea behind enumerated types is to
create new data types that can take on
only a restricted range of values.
Moreover, these values are all expressed
as constants rather than magic numbers--in fact,
there should be no need to know the underlying values.
The names of the constants should be sufficient for
the purposes of comparing values.
*/
#include <iostream>
using namespace std;

enum wind_directions
{
    no_wind,
    north_wind,
    south_wind,
    east_wind,
    west_wind
};
int main()
{

}
