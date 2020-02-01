#include <iostream>
#include <cstring>
using namespace std;

int nameRecords[3][2] = //3 rows & 2 columns
{
    {10, 20}, //row 0
    {30, 40}, //row 1
    {50, 60}  //row 2
}; //semi-colon terminates a block of statements or a statement

int main()
{
   // cout<<nameRecords[2][0]; //row 2 which is [3] and column 0 which is [1]

for (int row = 0; row < 3; row++)
    {
       for (int col = 0; col < 2; col++)
        cout<<nameRecords[row][col]<<endl;
    }
    return 0;
}
