* Write a C++ program to create multilevel inheritance. *


Deriving a class from a derived class is know as multilevel inheritance.
syntax for multilevel inheritance;
        class A { 
                ... .. ... 
        };
        class B: public A {
               ... .. ...
        };
        class C: public B {
               ... ... ...
        };
        
Here, class C is derived from the derived class B which is a derived class from base class A.       
