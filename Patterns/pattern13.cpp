/*
Output

* * * * * * * * * 
* * * *   * * * * 
* * *       * * * 
* *           * * 
*               * 
* *           * * 
* * *       * * * 
* * * *   * * * * 
* * * * * * * * * 


*/

//Code

#include<iostream>
using namespace std;

int main()
{
    int n=9,c1=(n-1)/2;
    int c2=3*n/2-1,i,j;

for (i=0;i<n;i++)    
{
    for (j=0;j<n;j++)
    {
        if(i+j<=c1 || i-j>=c1 || j-i>=c1 || i+j>=c2)
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