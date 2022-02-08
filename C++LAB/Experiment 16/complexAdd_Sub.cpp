// write a c++ program to complex numbers addition and subtraction using binary operand
#include <iostream>  
using namespace std;

class Complex_num  
{   
    int x, y;  
    public:  
        void read()  
        {  
            cout << "Enter the first complex number: " << endl;  
            cin >> x >> y;  
        }          
        Complex_num operator + (Complex_num obj)  
        {   
            Complex_num A;   
            A.x = x + obj.x;  
            A.y = y + obj.y;  
            return (A);  
        }         
        Complex_num operator - (Complex_num obj)  
        {    
            Complex_num A;  
            A.x = x - obj.x;  
            A.y = y - obj.y;  
            return (A);  
        }         
        // display the result of addition  
        void print()  
        {  
            cout << x << " + " << y << "i" << "\n";  
        }  
          
        // display the result of subtraction  
        void print2()  
        {  
            cout << x << " - " << y << "i" << "\n";  
        }  
};  
int main ()  
{  
Complex_num a, b, sum, sub;  
    a.read();  
    b.read();     
    sum = a + b;  
    sub = a - b;  
    cout << "\nEntered values are: \n";  
    cout << " \t";  
    a.print();  
    cout << " \t";  
    b.print();   
    cout << "\n The addition of two complex (real and imaginary) numbers: ";  
    sum.print(); 
    cout << "\n The subtraction of two complex (real and imaginary) numbers: ";  
    sub.print2
    return 0;  
}  
