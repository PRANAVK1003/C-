/*There are two types of Header Files : 1)System Header Files : It comes with compiler
2)User Defined Header Files : It is created by user.*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5, b= 9 ;
    cout<<"Operators in C++ :"<<endl;
    cout<<"Arithmetic Operators :"<<endl;
    cout<<"1) Addition Operator : "<<a+b<<endl;
    cout<<"2) Subtraction Operator : "<<a-b<<endl;
    cout<<"3) Multiplication Operator : "<<a*b<<endl;
    cout<<"4) Division Operator : "<<a/b<<endl;
    cout<<"5) Modulus Operator : "<<a%b<<endl;
    cout<<"6) Post -Increment Operator : "<<a++<<endl;
    cout<<a<<endl;
    cout<<"7)Post- Decrement Operator : "<<a--<<endl;
    cout<<a<<endl;
    cout<<"8) Pre-Increment Operator : "<<++a<<endl;
    cout<<a<<endl;
    cout<<"9) Pre-Decrement Operator : "<<--a<<endl;
    cout<<a<<endl;


    cout<<"Relational Operators :"<<endl;
    cout<<"1) Equal To Operator : "<<(a==b)<<endl;
    cout<<"2) Not Equal To Operator : "<<(a!=b)<<endl;
    cout<<"3) Greater Than Operator : "<<(a>b)<<endl;
    cout<<"4) Less Than Operator : "<<(a<b)<<endl;
    cout<<"5) Greater Than or Equal To Operator : "<<(a>=b)<<endl;
    cout<<"6) Less Than or Equal To Operator : "<<(a<=b)<<endl;

    cout<<"Logical Operators :"<<endl;
    cout<<"1) AND Operator : "<<(a>0 && b<10)<<endl;
    cout<<"2) OR Operator : "<<(a>0 || b<10)<<endl;
    cout<<"3) NOT Operator : "<<!(a>0)<<endl;
    cout<<"4) XOR Operator : "<<(a>0 ^ b<10)<<endl;

    cout<<"Biwise Operators:"<<endl;
    cout<<"1) Bitwise AND Operator : "<<(a&b)<<endl;
    cout<<"2) Bitwise OR Operator : "<<(a|b)<<endl;
    cout<<"3) Bitwise XOR Operator : "<<(a^b)<<endl;
    cout<<"4) Bitwise NOT Operator : "<<(~a)<<endl;
    cout<<"The Size of Operator: "<<sizeof(a)<<endl;

    return 0;

    return 0 ;
}