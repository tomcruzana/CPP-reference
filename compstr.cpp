#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char word[5] = "?ate"; //the ? will be guessed by our program

    for (char ch ='a'; strcmp(word, "mate"); ch++) // for loop
    {
    cout<<word<<"\n";
    word[0] = ch;
    }
    cout<<"After loop ends, word is "<<word<<endl;

    return 0;
}
