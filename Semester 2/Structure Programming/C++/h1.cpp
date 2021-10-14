#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main ()
{ cout << "What is your favourite colour? ";
string colour;
cin >> colour;
cout << "That's fantastic! "; cout << colour; cout << " is my favourite colour, as well!";
cout << "Are you an "; int adventurer; cout << "adventurer, "; int politician; cout << "policitian, or "; int dreamer; cout << "dreamer?";
string mystring;
cin >> mystring;
if (mystring == adventurer)
   cout << "That's great!";
return 0;
}
