#include<iostream>
using namespace std ; 

int add(int a , int b)//Declaration 
{
    //Definition 
    int c ;
    c = a + b ;
    return c ;

}

int main(){
    int a , b ; 
    cout<<"Enter the first number: "<<endl;
    cin>>a ;

    cout<<"Enter the second number: "<<endl;
    cin>>b;
    cout<<"The sum of the two numbers is: "<<add(a,b)<<endl; //Function Call 
    return 0 ;


    
}