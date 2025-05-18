#include<iostream> 
using namespace std ; 

namespace first{
    int x = 34 ; 
}
namespace second{
    int x = 1 ; 
}

int main ()
{
    int x = 2 ;
    cout << first::x << endl ;
    cout << second::x << endl ;
    cout<< x << endl ;
    int sum = first::x + second:: x ; 
    cout << sum << endl ;
    return 0 ;
}