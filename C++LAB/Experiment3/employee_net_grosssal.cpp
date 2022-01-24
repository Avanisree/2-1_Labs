#include<iostream>
#include<string>
using namespace std;

class Employee{
        public:
        int emp_no;
        string emp_name;
        int Basic,DA,IT,netsal,gross_sal;
         
        void read( ){
           cout<<"enter employee no,name,basic:"<<endl;
           cin>>emp_no>>emp_name>>Basic; 
         }
        void display(){
           cout<<"details of employee:"<<endl;
         cout<<"emp_no:"<<emp_no<<endl<<"emp_name:"<<emp_name<<endl<<"basic:"<<Basic<<endl;    
         }  
        void calculate_grosssal();
        void calculate_netsalary();
        
};
void Employee :: calculate_grosssal(){
           DA=Basic*(0.52);
           gross_sal=Basic+DA;
           cout<<"gross salary is:"<<gross_sal<<endl;
      }
void Employee :: calculate_netsalary(){
          IT=gross_sal*(0.30);
          netsal=gross_sal-IT;
          cout<<"netsalary is:"<<netsal<<endl;
          }
int main(){
     int n,i;
        cout<<"enter number of employees:"<<endl;
        cin>>n;
     Employee e[n];
     for(i=0;i<n;i++){
     e[i].read();
     }
     for(i=0;i<n;i++){
     e[i].display();
     e[i].calculate_grosssal();
     e[i].calculate_netsalary();
     }
     return 0;

}
