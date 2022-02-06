//Write a C++ to illustrate the concepts of console I/O operations.

#include <iostream> 
using namespace std; 
int main() 
{ 
	char x, ch; 
	
   cout<<"Enter the character:";
	cin.get(x); 
	cout << "The given Character is:";	
   cout.put(x); 
   cout << "\nPrinting n Characters from given sentence: ";
   cout.write("Welcome to Hyderabad", 10);
  return 0;
}
