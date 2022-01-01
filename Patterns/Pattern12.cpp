/*

*     * * * * 
*     *
*     *
* * * * * * *
      *     *
      *     *
* * * *     *

*/
//code
#include<iostream>
using namespace std;

int main()


{
 int n=7,mid = n/2+1 ,i,j;
 for (i=1;i<=n;i++)
{
    for (j=1;j<=n;j++)
    {
        if (i==mid || j==mid || (i==1 && j>=mid ) || (i==n && j<=n/2)  || (j==1 && i<=n/2) || (j==n && i>=mid ))
        {
            cout<<"* ";
        }
        else
        {
            cout<<"  ";
        }
    }cout<<endl;
 }
return 0;
}
