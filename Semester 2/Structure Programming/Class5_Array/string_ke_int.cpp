#include <iostream> 
#include <sstream> 
using namespace std; 
  
int main() 
{ 
    string ter = "12345"; 
  
    // object from the class stringstream 
    stringstream geeks(ter); 
  
    // The object has the value 12345 and stream 
    // it to the integer x 
    int x = 0; 
    geeks >> x; 
  
    // Now the variable x holds the value 12345 
    cout << "Value of x : " << x; 
  
    return 0; 
}
