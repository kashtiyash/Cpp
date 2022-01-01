/*
Output - 

* * * * * 
*     * * 
*   *   * 
* *     * 
* * * * * 


*/
//Code 
#include<iostream>
using namespace std;

int main()
{
    int n=5,i,j;

    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n; j++)
        {
            if (i==1 || i==n || j == 1 || j==n || i+j==n+1)
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