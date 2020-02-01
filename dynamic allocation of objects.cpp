#include <iostream>
using namespace std;

class Box
{
   public:
      Box() {
         cout << "Constructor called!" <<endl;
      }
      ~Box() {
         cout << "Destructor called!" <<endl;
      }
};

int main( )
{
   Box* myBoxArray = new Box[4];

   delete [] myBoxArray; // Delete array

   return 0;
}
/*
If you were to allocate an array of four Box objects,
the Simple constructor would be called four times and
similarly while deleting these objects, destructor
will also be called same number of times.
*/
