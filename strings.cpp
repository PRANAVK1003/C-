#include<bits/stdc++.h>
using namespace std ;

bool isPalindrome(string str)
    {
        int start = 0 , end = str.length() - 1 ;
        while (start < end) {
            if (str[start] != str[end]) {
                return false ;
                }
                start++ ;
                end-- ;
                }
                return true ;
            
    }

int main(){
    string name = "Pranav";
    string surname = "Kumbhar";
    string fullname = name + surname ; //Concantenation of String
    string remark = "is intelligent";
    cout << name << endl;

    //Operations 
    cout << name.length() << endl;
    cout << name.substr(0,4) << endl;
    cout<< fullname<<endl;
    cout<<fullname[8]<<endl;
    cout<<fullname.append(remark)<<endl;

    //Reverse a string 
    string str = "hello";
    reverse(str.begin(), str.end());
    cout << str << endl;
    cout<<(isPalindrome(str)?"Yes":"No");


}


