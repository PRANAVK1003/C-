#include<bits/stdc++.h>
using namespace std;

int main()
{

    int  num = 58 ; 
    int* ptr = &num;
    // & --> Address of Operator 
    // * --> Dereference Operator
    cout << "Value of num: " << num << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value of ptr using dereference operator: " << *ptr << endl;
    return 0;

    

}