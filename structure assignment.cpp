#include <iostream>
#include <cstring>
using namespace std;

struct student
{
    char name[10];
    int age;
    float grade;
};

int main()
{
        student Rebecca = {"Rebecca", 21, 87.5};

        student replica;
        replica = Rebecca; //assignment of one structure to another.
        cout<<Rebecca.name<<", "<<Rebecca.age<<", "<<Rebecca.grade<<"\n";
        cout<<replica.name<<", "<<replica.age<<", "<<replica.grade<<"\n";
}
