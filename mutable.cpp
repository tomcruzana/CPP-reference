/*mutable. You can use it to indicate
that a particular member of a structure
(or class) can be altered even if a particular
structure (or class) variable is a const.
For example, consider the following code:
    */

struct data
{
char name[30];
mutable int accesses; ...
};
const data veep = {"Claybourne Clodde", 0, ...}; //const struct initialization
//this means that it is non modifiable by default. however, through the power of the
//mutable keyword, we can modify the mutable variable inside the constant struct

strcpy(veep.name, "Joye Joux");// not allowed. because it's not mutable
veep.accesses++; // allowed because it's mutable
