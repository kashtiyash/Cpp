/*
Output- 


* * * * * * *
          *
        *
      *
    *
  *
*

*/
//Code

#include<iostream>
using namespace std;
int main()
{
  int i,j,n=7;
  for(i=1;i<=n;i++)
  {
      for (j = 1; j<=n; j++)
      {
          if(i==1 || i+j==n+1)
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
} 