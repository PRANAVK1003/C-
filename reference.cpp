#include<bits/stdc++.h>
using namespace std ; 
int c = 45 ; 
int main()
{
    int a = 10 ;
    int b = 20 ;
    int c = a + b ;
   


    cout<<"The Value of c is :"<<c<<endl;
    cout<<"The global Value of c is :"<<::c<<endl;

    float d = 34.78f;
    cout<<"The value of d is :"<<d<<endl;
    long double e = 34.78l;
    cout<<"The value of e is :"<<e<<endl;
    cout<<"The size of a is :"<<sizeof(a)<<endl;
    cout<<"The Size of b is :"<<sizeof(b)<<endl;
    cout<<"The size of c is :"<<sizeof(c)<<endl;
    cout<<"The size of d is :"<<sizeof(d)<<endl;
    cout<<"The size of e is :"<<sizeof(e)<<endl;

    //Reference Variables 
    float x = 455.68f;
    float &y = x ;
    cout<<x<<endl;
    cout<<y<<endl;

    //Typecasting 
    float z = 45.79f; 
    int w = 98;

    cout<<"The value of z is:"<<(int)z/*or (int)z*/<<endl;
    cout<<"The Expression is : "<<z+w<<endl;
    cout<<"The expression : "<<int(z)+w<<endl ; 
    return 0 ;

}