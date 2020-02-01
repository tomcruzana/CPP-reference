/*"Destructor" functions are the inverse of constructor functions.
They are called when objects are destroyed (deallocated).
Designate a function as a class's destructor by preceding the class
name with a tilde (~). For example, the destructor for class String
 is declared: ~String(). In a /clr compilation, the destructor
 has a special role in releasing managed and unmanaged resources.
https://msdn.microsoft.com/en-us/library/6t4fe76c.aspx
*/
//The destructor is commonly used to "clean up" when an object is no longer necessary

#include <iostream>

using namespace std;

class Line
{
   public:
      void setLength( double len );
      double getLength( void );
      Line();   // This is the constructor declaration
      ~Line();  // This is the destructor: declaration

   private:
      double length;
};

// Member functions definitions including constructor
Line::Line(void)
{
    cout << "Object is being created" << endl;
}
Line::~Line(void)
{
    cout << "Object is being deleted" << endl;
}

void Line::setLength( double len )
{
    length = len;
}

double Line::getLength( void )
{
    return length;
}
// Main function for the program
int main( )
{
   Line line;

   // set line length
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() <<endl;

   return 0;
}
