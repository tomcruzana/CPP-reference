// newstrct.cpp _ using new with a structure
#include <iostream>
using namespace std;
struct inflatable // structure template {

char name[20];
float volume;
double price;
};

int main() {
inflatable * ps = new inflatable; // allot structure space
cout << "Enter name of inflatable item: ";
cin.get(ps->name, 20); // method 1 for member access
cout << "Enter volume in cubic feet: ";
cin >> (*ps).volume; // method 2 for member access
cout << "Enter price: $";
cin >> ps->price;

cout << "Name: " << (*ps).name << "\n"; // method 2
cout << "Volume: " << ps->volume << " cubic feet\n";
cout << "Price: $" << ps->price << "\n"; // method 1 return 0;
}
