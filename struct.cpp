#include<bits/stdc++.h>
using namespace std;
//Creating a Structure 
struct student {
    int age ;
    string gender;
    string name ;
    float marks;
};

int main()
{
    struct{
        int num;
        string name;


    }Structure;


    //Assigning Values 
    Structure.num = 10;
    Structure.name = "Rahul";

    //Print members of Structure
    cout << "Number: " << Structure.num << endl;
    cout << "Name: " << Structure.name << endl;

    student s1 = {22,"Male","Pranav",178.5};
    student s2 = {21,"Female","Anushka",170};
    student s3 = {20,"Male","Rohan",180};

    cout<<"First Student : "<<s1.age<<" "<<s1.gender<<" "<<s1.name<<" "<<s1.marks<<endl;
    cout<<"Second Student : "<<s2.age<<" "<<s2.gender<<" "<<s2.name<<" "<<s2.marks<<endl;
    cout<<"Third Student : "<<s3.age<<" "<<s3.gender<<" "<<s3.name<<" "<<s3.marks<<endl;

   union Money  {
    int rupees ;//4 bytes 
    float dollars; // 4 bytes 
    float pounds ; // 4 bytes
    char currency ;// 1 byte 

   }m1;
   
    m1.rupees = 1000 ;
    m1.dollars = 485.50 ;
    m1.pounds = 99.80 ;
    m1.currency = 'R' ;
    cout<<"Rupees : "<<m1.rupees<<endl;
    cout<<"Dollars : "<<m1.dollars<<endl;
    cout<<"Pounds : "<<m1.pounds<<endl;
    cout<<"Currency : "<<m1.currency<<endl;

    enum Meal{breakfast , lunch , dinner };
    Meal m = lunch ;
    Meal n  = dinner ;
    cout<<m<<endl;
    cout<<n<<endl;
     

   return 0 ;



}