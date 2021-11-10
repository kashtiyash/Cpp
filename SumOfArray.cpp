//Program to find sum of all elements of  array
#include<iostream>
using namespace std;

int main()
{
    int n,i;
    float num[100],sum=0,average; //increase array size if want more elements to store 
    
    cout<<"Enter the number of elements : ";
    cin>>n;

    for (int i=0;i<n;i++)
    {
        cout<<i + 1<<". Enter number :";
        cin>>num[i];
        sum+=num[i];
    }
 cout<<"Sum of Array is : "<<sum<<endl;
 return 0;
}


