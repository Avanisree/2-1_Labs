/*
Write a C++ program to declare Struct. Initialize and
display contents of member Variables.

*/

#include <iostream>
using namespace std;
struct college_info{
    char college_name[15];
    char college_code[10];
    char dept[50];
    int intake;
};
int main() {
    struct college_info college;
    
    cout<<"Enter the College Information \n";
    cout<<"Name of the college: ";
    cin>>college.college_name;
    cout<<"College Code: ";
    cin>>college.college_code;
    cout<<"Department: ";
    cin>>college.dept;
    cout<<"Department In-take: ";
    cin>>college.intake;
    cout<<"\nCollege Information";
    cout<<"Name of the college : "<<college.college_name;
    cout<<"\nCollege University Code: "<<college.college_code<<college.dept;
    cout<<"\nName of the Department: "<<college.dept;
    cout<<"\nThe department of "<<college.dept<<" has in-take : "<<college.intake;
    return 0;
}
