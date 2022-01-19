/*********************************************************
Write a C++ program to allocate memory using new operator
********************************************************/

#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr = new int;  // Dynamic memory allocation
    cout<< "Number of bytes allocated to ptr is " << sizeof(ptr) << endl;
    *ptr = 100;
    cout << "Value at ptr is " << *ptr << endl;
    return 0;
}
