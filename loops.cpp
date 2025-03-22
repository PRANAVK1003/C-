#include<iostream>
using namespace std ; 

int main()
{
    /*Loops in C++ 
    3 Types of C++ :
    1. For Loop
    for(initialisation ; condition ; termination )
    {
      //code here 
    }

    2. While Loop
    while(condition)
    {
    //code here
    }
    3. Do-While Loop
    do
    {
       //code here
    }while(condition);
     */

    int j =1;
    while (j<=100)
    {
        cout<<j<<endl;
        j++;
    }

    int i = 1 ; 
    do{
        cout<<i*6<<endl;
        i++;
    }while(i<=10);

    int n ;
    cout<<"Enter the  number upto which you want odd-sum: "<<endl;
    cin>>n ;
    
    int k =1, sum = 0 ;
    for(k=1 ; k<=n ; k++)
    {
       if(k%2!=0)
       {
        sum = sum+ k ;
        //cout<<sum<<endl;
       }
    


    }
    cout<<sum<<endl;

    //Sum of first 100 prime numbers 
    int prime = 2 ;
    int sum1 = 0 ;
    int count = 0 ;
    while(count<100)
    {
        int flag = 0 ;
        for(int i = 2 ; i<=prime/2 ; i++)
        {
            if(prime%i==0)
            {
                flag = 1 ;
                break ;
                }
                }
                if(flag==0)
                {
                    sum1 = sum1 + prime ;
                    count++;
                    }
                    prime++;
                    }
                    cout<<sum1<<endl;
                    


    return 0 ; 
  


    
}