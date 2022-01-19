/*
5. Write a C++ program to declare a class.
Declare pointer to class. Initialize and
display the contents of the class member.
*/

#include<iostream>
using namespace std;

class Rectangle
{
	public:
		int length, breadth;
		
	void read(){
		cout<<"Length = ";
        cin>> length;
        cout<<"Breadth = ";
        cin>> breadth;

	}
	
	void display(){
		int area = 2*length*breadth;
        cout<<"Area of the Rectangle is "<<area;
	}
};
int main ()
{
	Rectangle rect, *ptr;
    ptr = &rect;
    ptr -> read();
    ptr -> display();
    return 0;
}
