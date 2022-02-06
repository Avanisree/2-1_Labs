// Write a C++ Program for divide by zero using multiple catch

 #include<iostream>
using namespace std;

int main(){
   int x, y;
   cout << "numberator is " ;
   cin >> x;
   cout << "Denominator is ";
   cin >> y;
   
   try {
      try {
         if(y <= 0){
            throw y;
         }
         
         cout << "Answer is " << x/y <<endl;
      }
      
      catch(int a){
         cout << "Exception caught!!"<<endl;
      }
      throw y;
   }
   
   catch(...){
      cout << "Denominator cannot be 0 or -ve number!";
   }

  return 0;
}
