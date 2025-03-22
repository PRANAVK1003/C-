#include<iostream>
#include<iomanip> //for including manipulators library 
using namespace std ;

int main()
{
    //Constants in C++ : Useful for some constant values like PI, GRAVITY, etc.
    const int a = 89 ; //This value of a will remain same throughour the entire program 
   // a =90 ; will give error since we try change the value of constant variable
    cout<<"The Value of a is "<<a<<endl;

    //Manipulators in C++ : used for Data formatting and display 
    //Most common examples are endl , cout , setw
    int b = 1234  , c = 908 , d = 875 ;
    
    cout<<"The Value of b is :"<<b<<endl;
    cout<<"The Value of c is :"<<c<<endl;
    cout<<"The Value of d is :"<<d<<endl;
    //Here we are using manipulator to display the values of b , c and d in a
    cout<<"The Value of b is : "<<setw(4)<<b<<endl;
    cout<<"The Value of c is : "<<setw(4)<<c<<endl;
    cout<<"The Value of c is : "<<setw(4)<<d<<endl;

    //Operator Precedence : The order in which operators are executed in an expression
    int e = 5 + 3 * 2 ; // 3*2 is evaluated first and then 5+6
    cout<<"The Value of e is : "<<e<<endl;
    int t =( 78 & 34 ) + (78 | 34)  * (56 & 90 ) / (56 | 90) ; // 
    cout<<"The Value of t is : "<<t<<endl;



    


    return 0 ;

}