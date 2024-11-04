#include <iostream>
using namespace std;

int main() {
string name;
cout<<"Welcome to C++ language Programming"; // display a string (a string is enclosed by "") cout<<"\nGood morning pal!, what is your name? "; // \n escape sequence is a newline character cin>>name; // get string from user
cout<<"Hi" + name + ", Welcome to C++ Programming Class.\n"; // we can concatenate strings by using +
}
