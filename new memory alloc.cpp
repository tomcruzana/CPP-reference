#include <iostream>
using namespace std;

//Using new to request memory when you need it is just the more glamorous
//half of the c++ memory-management package.
    //old way to initialize ptr
    //int pk = 1001;
    //int *ptr_pk = &pk;

int main()
{
    int *pt = new int; //allocate space for int
    *pt = 1101; //store a value there

    cout<<"int value ="<<*pt<<": location ="<<pt<<"\n";
//
    double *pd = new double; //allocate space for double
    *pd = 10000001.0; //store a double there

    cout<<"double value ="<<*pd<<": location ="<<pd<<"\n";
//
    cout<<"size of pt = "<<sizeof pt<<endl;
    cout<<"size of *pt = "<<sizeof *pt<<endl;

    cout<<"size of pd = "<<sizeof pd<<endl;
    cout<<"size of *pd = "<<sizeof *pd<<endl;

//

/*

the delete operator, which enables you to return
memory to the memory pool when you are finished with it.
That is an important step toward making the most
effective use of memory. Memory that you return,
or free, then can be reused by other parts of your program.
You use delete by following it with a pointer to a block of
memory originally allocated with NEW ONLY!:
*/
    delete pt; // delete the pointers
    delete pd;

    //
    cout<<"int value ="<<*pt<<": location ="<<pt<<"\n";
    cout<<"double value ="<<*pd<<": location ="<<pd<<"\n";

    return 0;
}
