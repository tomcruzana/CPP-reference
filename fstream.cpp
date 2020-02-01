#include <fstream>
#include <iostream>
using namespace std;

int main ()
{

   char data[100];

   // open a file in write mode.
   ofstream outfile; //output file stream
   outfile.open("afile.dat"); //this will create a dat file if there no dat file detected.

   cout << "Writing to the file" << endl;
   cout << "Enter your name: ";
   cin.getline(data, 100);

   // write inputted data into the file.
   outfile << data << endl;

   cout << "Enter your age: ";
   cin >> data;
   cin.ignore(); //ignore() function to ignore the extra characters left by previous read statement.

   // again write inputted data into the file.
   outfile << data << endl;

   // close the opened file.
   outfile.close();

   // open a file in read mode. ..this stage will reopen the file in read mode so we can see its contents that we just wrote
   ifstream infile;
   infile.open("afile.dat");

   cout << "Reading from the file" << endl;
   infile >> data;

   // write the data at the screen.
   cout << data << endl;

   // again read the data from the file and display it.
   infile >> data;
   cout << data << endl;

   // close the opened file.
   infile.close();

   return 0;
}

//src: http://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm
