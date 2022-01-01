/*
output - 

* * * * * 
*       * 
* * * * * 
*       * 
* * * * * 

*/

//Code

#include<iostream>
using namespace std;

int main()
{
    int i,j,n=5,mid=n/2+1;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            if (i==1 || i==n || i==mid || j==1 || j==n)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }

        }
        cout<<endl;
    }
return 0;
}