#include<iostream>
using namespace std ; 

class Teacher {
  
    
    public : // Access Specifier 
    //Properties/Attributes 
    //Constructor
    //Non-parameterised Constructor
    /*Teacher(){
        dept ="Computer Science " ;
    }*/
    //Parameterised Constructor 
    Teacher(string name , string dept , string sub ,double salary){
        this->name = name ;
        this->dept = dept ;
        subject = "Computer Science " ;
        this->salary = salary ;
    }
    //Copy Constructor 
    Teacher()


    string name ;  // Data Members 
    string dept ; 
    string subject ; 
   // int age ; 
    //string gender ;
    double salary ; 
  

    //Methods /Functions
    void changeDept(string newDept) {
        dept = newDept ;
        }

    void getInfo(){
        cout<< "Name : "<<name<<endl;
        cout<< "Subject : "<<subject<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Salary: "<<salary<<endl;
    }


};

int main() {
    Teacher t1("Pranav","Data Science","Machine Learning",50000) ;
    Teacher t2(t1); // Default Copy Constructor is invoked by Compiler. 
    /*t1.name = "John" ;
    //t1.dept = "Maths" ;
    t1.subject = "Algebra" ;
    t1.age = 35 ;
    t1.gender = "Male" ;
    t1.salary = 50000 ;*/

    /*cout<<t1.name<<" "<t1.dept<<" "<<t1.subject<<" "<<t1.age<<" "<<t1.gender<<" "<<t1.salary<<endl;
    //t1.changeDept("Science");*/
    //cout<<t1.dept<<endl;
    //t1.getInfo();
    //cout<<t2.subject<<endl;
    t2.getInfo();
}