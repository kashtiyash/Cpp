/*
Output - 

 *  *  *  *  *      
  *  *  *  *  *     
   *  *  *  *  *    
    *  *  *  *  *   
     *  *  *  *  *  
      *  *  *  *  * 

*/

//Code -

#include<iostream>

using namespace std;

int main()
{
    int i,j;
    for (i=0;i<6;i++)
    {
        for (j=0;j<i;j++)
        {
            cout<<" ";

        }
        for ( j = 0; j<5; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
        

    }
return 0;

}