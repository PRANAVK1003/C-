#include<iostream>
using namespace std ; 

int add(int a , int b ); // Function Prototype
int add(int , int ) ;// Acceptable Prototype 


   int add(int a , int b)
//Declaration . Here a and b are formal parameters
{
    //Definition 
    int c ;
    c = a + b ;
    return c ;

}
//This will not swap a and b 
void swap ( int  a , int  b ) // Formal Parameters
{
    int temp ;
    temp = a ;
    a = b ;
    b = temp ;
}
//Using Pointer Reference
void swapPointer ( int*  a , int*  b ) // Formal Parameters
{
    int temp ;
    temp = *a ;
    *a = *b ;
    *b = temp ;
}
//Using Reference Variables
//int & : Reference to int
void swapReferenceVar ( int  &a , int  &b ) // Formal Parameters
{
    int temp ;
    temp = a ;
    a = b ;
    b = temp ;
    //return a 
}

int main(){
    int num1, num2 ; 

    cout<<"Enter the first number: "<<endl;
    cin>>num1 ;

    cout<<"Enter the second number: "<<endl;
    cin>>num2;
 // Here num1 and num2 are actual parameters 
    cout<<"The sum of the two numbers is: "<<add(num1,num2)<<endl; //Function Call
    
    int x = 4 , y = 5 ; 
    cout<<"The Value of X is : "<<x<<" and the value of Y is : "<<y<<endl ;
    //swap(x,y); This will not swap a and b
    swapPointer(&x , &y);// This will swap a and b 
    cout<<"The Value of X is : "<<x<<" and the value of Y is : "<<y<<endl;
    //swapReferenceVar(x,y) = 183 . Replaces x with 183 
    swapReferenceVar(x , y); //This will swap a and b

    cout<<"The Value of X is : "<<x<<" and the value of Y is : "<<y<<endl;
    return 0 ;


 

    
}