/*
Arrays of variables of type "class" is known
as "Array of objects". The "identifier" used
to refer the array of objects is an user defined data type.
*/

#include <iostream>
using namespace std;

const int MAX = 100;
    class Details
    {
    private:
        int salary;
        float roll;
    public:
        void getname()
        {
            cout << "\n Enter the Salary:";
            cin >> salary;
            cout << "\n Enter the roll:";
            cin >> roll;
        }
        void putname( )
        {
            cout << "Employees" << salary <<
            "and roll is" << roll << '\n';
        }
    };

int main()
{
Details det[MAX];
int n=0;
char ans;
do{
cout << "Enter the Employee Number::" << n+1;
det[n++].getname;
cout << "Enter another (y/n)?: " ;
cin >> ans;
} while ( ans != 'n' );
for (int j=0; j<n; j++)
{
cout << "\nEmployee Number is:: " << j+1;
det[j].putname( );
}
}
