/*
Output - 


* * * * * 
*
* * * * * 
*       * 
* * * * * 

*/
//Code 
#include<iostream>
using namespace std;

int main()
{
    int n=5,mid=n/2+1,i,j;
    for(i =1; i<=n; i++)
    {
        for ( j = 1; j<=n; j++)
        {
            if( i==1 || i==n || i==mid || j==1 || (j==n && i>=mid ))
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }cout<<endl;
        
    }
    
}