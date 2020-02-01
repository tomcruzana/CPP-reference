// arrfun1.cpp -- functions with an array argument
#include <iostream>
using namespace std;

const int ArSize = 8;
int sum_arr(int arr[], int n); // prototype. you can also just write the datatype and exclude the symbolic constant.
//ex: int sum_arr(int, int); instead of int sum_arr(int arr[], int n);
int main()
{
int cookies[ArSize] = {1,2,4,8,16,32,64,128}; // some systems require preceding int with static to
// enable array initialization

int sum = sum_arr(cookies, ArSize); //here we put coolies array and arsize which is equal to 8 as an argument in the function
cout << "Total cookies eaten: " << sum << "\n";

return 0;
}
// return the sum of an integer array
int sum_arr(int arr[], int n)
{
int total = 0; //local variable
for (int i = 0; i < n; i++) //i is a counter for the loop. if i is < 8 then i++
total = total + arr[i]; //adds all the elements in the array
return total;
}
