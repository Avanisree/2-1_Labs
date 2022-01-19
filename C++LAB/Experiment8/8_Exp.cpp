/*********************************************************
Write a C++ program on Friend Function
********************************************************/

#include <iostream>
using namespace std;

class one;

class two
{
    public:
        void print(one &x);
};

class one
{
    int a, b;
    friend void two::print(one& x);
    public:
        one() : a(1), b(2) { }
};

void two::print(one& x)
{
    cout << "a is " << x.a << endl;
    cout << "b is " << x.b << endl;
}

int main()
{
    one xobj;
    two yobj;
    yobj.print(xobj);
}
