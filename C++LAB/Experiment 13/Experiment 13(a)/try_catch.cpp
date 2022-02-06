#include<iostream>
using namespace std;

int main(){
   int x, y;
   cout << "numberator is " ;
   cin >> x;
   try {
      cout << "Denominator is ";
      cin >> y;
      if(y <= 0){
         throw y;
      }
      cout << "Answer is " << x/y <<endl;
   }
   
   catch(int a){
      cout << "Exception caught!!"<<endl;
      cout << "Denominator cannot be 0 or -ve number!";
   }
   
   return 0;
}
