#include<iostream>
using namespace std ; 

int main()
{
    int age ;
    cout << "Enter your age : "<<endl ;
    cin>>age;
    switch(age)
    {
        case 18 :
        cout<<"You are an adult"<<endl ;
        break ;
        case 25 :
        cout<<"You are a young adult"<<endl ;
       // break ;
        case 30 :
        cout<<"You are a middle-aged adult"<<endl ;
        break ;
        case 60 : 
        cout<< "You are senior citizen"<<endl;
        break;
        default:
        cout<<"You are an average person "<<endl ;
        break;
    }
}