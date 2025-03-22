#include<iostream>
#include<string>
using namespace std;
int global= 30 ; //Global Scope of the Variable 
void sum()
{
    int a ;
    cout<<global;
}
int main()
{ 
    sum();
  /* int global = 9;
    global = 78;*/
    
    cout<<"Hello World"<<endl;;
    //return 0;


//Strings in C++
string name = "Pranav";
cout<<"The name is "<<name<<endl;
cout<<"the length of the name is " <<name.length()<<endl;
cout<<"The name is empty or not "<<name.empty()<<endl;
cout<<"The character at index 2 is  "<<name.at(2)<<endl; 
cout<<global;
}

