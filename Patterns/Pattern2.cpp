/*
Desired o/p -

 --> 
 -->  --> 
 -->  -->  --> 
 -->  -->  -->  --> 
 -->  -->  -->  -->  -->      
 -->  -->  -->  -->  -->  --> 
 -->  -->  -->  -->  -->      
 -->  -->  -->  --> 
 -->  -->  --> 
 -->  --> 
 --> 


*/

//Code

#include<iostream>
using namespace std;

int main()
{
    for (int i=0;i<6;i++)
    {
        for (int j=0;j<6;j++)
            {
                if ((i+j) >4 )
                {
                    cout<<" --> ";
                }
         
                
               
            }
            cout<<endl;
    }
  for (int i=0;i<6;i++)
    {
        for (int j=0;j<6;j++)
            {      
                if(i+j< 5)
                {
                    cout<<" --> ";
                }
                
               
            }
            cout<<endl;
    }
return 0;
} 

