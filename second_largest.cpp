//Program to get second largest element from an array
#include<iostream>
using namespace std;

int main()
{
   int i, arr[10], large, slarge;
   cout<<"Enter 10 Array Elements: ";
   for(i=0; i<10; i++)
      cin>>arr[i];

   large = arr[0];

   for(i=0; i<10; i++)
   {
      if(large<arr[i])
         large = arr[i];
   }

   slarge = arr[0];

   for(i=0; i<10; i++)
   {
      if(slarge<arr[i])
      {
         if(arr[i]!=large)
            slarge = arr[i];
      }
   }
    
   cout<<"\nLargest Element = "<<large; 
   cout<<"\nSecond Largest Element = "<<slarge;
   cout<<endl;
return 0;
}