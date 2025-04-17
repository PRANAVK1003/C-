#include<iostream>
using namespace std ; 

inline int product (int a , int b )// Inline function replaces the function body and logic from the calling point of the function 
{
    return a * b ;
}

float moneyRecieved(int currentMoney , float factor=1.04)// Here , float factor=1.04 is a default argument which is passed only once . 
{
    return currentMoney * factor ;
}

int main() 
{
   int a , b ; 
   cout<<"Enter the value of a : "<<endl;
   cin>>a ;
   cout<<"Enter the value of b : "<<endl;
   cin>>b ;
   cout<<"The product of a and b is : "<<product(a , b)<<endl ; // product(a,b) is replaced by a*b in the calling point of the function 'product' .

   int money ;
   cout<<"Enter the current money : "<<endl;
   cin>>money ;
   cout<<"The money received after 1 years is  : "<<moneyRecieved(money)<<endl; // Only one argument is passed for function call since the default argument is 1.04 .
   cout<<"For VIP if you have "<<money <<" Rs in your bank account , you will recieve "<<moneyRecieved(money , 1.1)<<" Rs"<<endl; //We overwrite the value of default argument by 10 .
   return 0 ;
}

