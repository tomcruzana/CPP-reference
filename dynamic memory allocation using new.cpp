#include <iostream>
using namespace std;



int main()
{
    double *var_double = new double; //allocate memory using a generic type
    *var_double = 23.312; //initialize the pointer to the allocated double

    cout<<*var_double<<endl;
    delete var_double; //free up memory

    //allocating memory for arrays

    int *ptr_array = new int[10]; //dynamically allocate arrays

    ptr_array[0] = 12313; //initialize pointer to the array
    ptr_array[1] = 99;

    cout<<ptr_array[0]<<endl; //output
    cout<<ptr_array[1]<<endl;
}
