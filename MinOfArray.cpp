//Program to find minimum element from array
#include<iostream>
using namespace std;

int main()
{
    int n,min=INT32_MAX;
    cout<<"Enter the size of array you want : ";
    cin>>n;
    float A[n];
    cout<<"Enter the Elements of array : "<<endl;
    
    for (int i=0;i<n;i++)
    {
        cout<<"Element no "<<i+1<<" is : ";
        cin>>A[i];
    }    
    
    for (auto x:A)
    {
        if (x<min)
        {
            min=x;
        }
    }
    
cout<<"Minimum no is : "<<min<<endl;
return 0;
}
