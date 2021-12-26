//Program to get second smallest element from an array
#include<iostream>
using namespace std;
int main()
{
    int arr[10],smallest,sec_smallest;
    cout<<"Enter the 10 elements :- ";
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }  
    smallest=arr[0];
    for (int j = 0; j < 10; j++)
    {
        if (smallest>arr[j])
        {
            smallest=arr[j];
        }
        
    }
    sec_smallest=arr[0];
    for (int k = 0; k < 10; k++)
    {
        if (sec_smallest>arr[k])
        {
            if (arr[k]!=smallest)
            {
                sec_smallest = arr[k];
            }    
        }     
    }
    cout<<endl;
    cout<<"\nSmallest Element is : "<<smallest;
    cout<<"\nSecond Smallest Element is : "<<sec_smallest;
    return 0;  
} 