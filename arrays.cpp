#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[30];
    int a[5] = {23,56,78,90,89};
    for(int i =0 ; i<5 ; i++)
    {
        cout<<a[i]<<endl;
    }

    /*int b[7];
    for(int i = 0 ; i<7 ; i++)
    {
        cin>>b[i];
        
    }
    cout<<"The Array is Represented as : "<<endl;
    for(int i=0;i<7;i++)
    {
        
        cout<<b[i]<<endl;

    }*/

    //2D Arrays 
    // datatype arrayName[rows][columns];
    int c[3][4];
    for(int i =0; i<3 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            cin>>c[i][j];
        }
    }
    cout<<"The 2D Array is Represented as : "<<endl;
    for(int i =0 ; i<3 ; i++)
    {
        for(int j =0 ; j<4 ; j++)
        {
            cout<<c[i][j]<<" ";
            }
            cout<<endl;
            }

}
