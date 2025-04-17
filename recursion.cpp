#include<iostream>
using namespace std ; 

int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}

int fibonacci(int n)
{
    if(n<2)
    {
        return 1 ;
    }
    return fibonacci(n-2)+fibonacci(n-1);
}

int main()
{
    int a ; 
    cout<<"Enter a number : "<<endl;
    cin>>a ;
    cout<<"Factorial of "<<a<<" is "<<factorial(a)<<endl ;
    cout<<"Fibonacci sequence upto  "<<a<<" is "<<fibonacci(a)<<endl ;
    return 0 ;
}