#include<iostream>
#include<cstring>
#include<string>
using namespace std ; 

int main()
{
    //Charachter Arrays in C++ 

    /*char str[] = {'P','r','a','n','a','v' ,'\0'};
    char str2[] = "Kumbhar"; //String literal
    int arr[] = {1,3,5};
    cout<<arr<<endl; //constant pointer to the first element of the array
    cout<<str<<" "<<str2<<endl; 
    cout<<str[3]<<endl;
    cout<<str[7]<<endl;
    cout<<strlen(str)<<endl;
    //Input/Output of C-Strings i.e charachter Arrays 
   /* char array[10];
    cout<<"Enter Charachter Array"<<endl;
    cin>>array ; 
    cout<<"Output: "<<array<<endl;
    //For Space separated input
    char array2[10];
    cout<<"Enter the String with space"<<endl;
    cin.getline(array2,10,'$'); //get the string with space
    cout<<"Output : "<<array2<<endl;
    for(char ch : array2)
    {
        cout<<ch <<" ";
    }
    cout<<endl;
    char name []="Virat kohli";
    int length = 0;
    for(int i=0;name[i]!='\0';i++)
    {
        length++;
    }
    cout<<"Length of the String is : "<<length<<endl;*/

    //Strings in C++
    string word = "C++ is a object-oriented programming language";
    cout<<word<<endl; 

    //Common String Operations
    string str1 = "AI";
    string str2 ="Engineer";
    string str3 = str1 + str2 ; //Concantenation 
    cout<<str3<<endl;
    cout<<str3.length()<<endl; //Length of the string
    cout<<str3.size()<<endl; //Size of the string
    cout<<str3.substr(0,2)<<endl; //Substring
    cout<<str3.append("is a new field")<<endl; //Append
    cout<<str3.find("AI")<<endl; //Find the string
    cout<<str3.find("AI",2)<<endl; //Find the string from index 2
    cout<<str3.erase(0,2)<<endl; //Erase the string from index 0 to 2
    cout<<str3.replace(0,2,"ML")<<endl; //Replace the string from index 0 to 2
    cout<<str3.insert(0,"ML")<<endl; //Insert the string at index 0
    cout<<str3.at(0)<<endl; //Access the string at index 0
    cout<<str3[0]<<endl; //Access the string at index 0
    cout<<str3.empty()<<endl; //Check if the string is empty
    
   

    
    return 0 ;
   


   
}
