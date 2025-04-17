#include<iostream>
using namespace std ; 

int add(int a , int b )
{
    return a + b ;
}

int add(int a , int b , int c )
{
    return a + b + c ;
}

//Calculate the volume of Cylinder 
int volume (double r , double h )
{
    return 3.14 * r * r * h ;
}

//Calculate volume of Cube 
int volume (int l )
{
    return l*l*l ; 
}

//Calculate  Volume of Rectangular Box 
int volume(int l , int b , int h )
{
    return l*b*h ;

}


int main()
{
    //int a , b , c ; 
    double r , h ;
    int l1, l2  , b , h1 ;
    cout<<"Enter the value for Cylinder: "<<endl;
    cin>>r>>h ;
    cout<<"Enter the values for Cube: "<<endl;
    cin>>l1;
    cout<<"Enter the values for Rectangular Box: "<<endl;
    cin>>l2>>b>>h1 ;
    //cout<<"Enter the three numbers : "<<endl;
    //cin>>a>>b>>c ;
    /*cout<<"The Sum of a and b is :   "<<add(3,6)<<endl;
    cout<<"the Sum of a ,b and c is : "<<add(3,7,8)<<endl;*/
    cout<<"The Volume of Cylinder is : "<<volume(r,h)<<endl;
    cout<<"The Volume of Cube is : "<<volume(l1)<<endl;
    cout<<"The Volume of Rectangular Box is : "<<volume(l2,b,h1)<<endl;
    return 0;
}