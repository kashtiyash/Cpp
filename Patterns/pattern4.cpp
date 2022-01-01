/*
Output -

 * 
 *  * 
 *     *       
 *        *    
 *  *  *  *  * 


*/

//Code 

#include<iostream>
using namespace std;
int main()
{
 int i,j;

 for (i=1;i<=5;i++)
 {
    for (j =1;j<=i;j++)
    {
        if(i==5 || j==i || j==1)
        {
            cout<<" * ";
        }
        else{
            cout<<"   ";
        }

    }
    cout<<endl;

 }

  return 0;    

}