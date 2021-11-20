/*
Output 

      *  *
   *     *
*        *
         *
         *
         *
*  *  *  *  *  *  *  

*/
//code

#include<iostream>
using namespace std;
int main()
{
    int n=8,mid= n/2 +1,i,j;

    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n; j++)
        {
            if (j==mid || i==n || (i+j == mid && j<=mid))
            {
                cout<<"*  ";
            }
            else
            {
                cout<<"   ";

            }

        }cout<<endl;
    }

return 0;  
} 