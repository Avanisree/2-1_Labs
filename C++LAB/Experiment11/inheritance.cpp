/******************************************************************************
 *********** Write a C++ program to create multilevel inheritance. ************
 ******************************************************************************/
 
#include <iostream>
using namespace std;
class base 
{
 	public:
 	int x,cl,cb;
 	void cricket()
 	{
    	cout << "\nEnter the length of cricket ground: ";
    	cin >> cl;
    	cout << "\nEnter the breadth of cricket ground: ";
    	cin >> cb;
    	x = cl*cb;
 	}
};
class derive1 : public base
{
 	public:
 	int vl,vb,y;
 	void volley_ball()
 	{
 	    cout << "\nEnter the length of volleyball ground: ";
 	    cin >> vl;
 	    cout << "\nEnter the breadth of volleyball ground: ";
 	    cin >> vb;
 	    y = vl*vb;
 	}
};
class derive2 : public derive1   
{
 	public:
 	
 	void a_playground()
 	{
 	    cout << "\nArea covered by playground is " << x + y <<" meters" ;
 	}
};
int main()
{
     derive2 a;      
     a.cricket();
     a.volley_ball();
     a.a_playground();
     return 0;
} 
