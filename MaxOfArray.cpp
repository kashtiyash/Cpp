//Program to find maximum element from array
#include<iostream>
using namespace std;

int main()
{
    int n,max=INT32_MIN;
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
        if (x>max)
        {
            max=x;
        }
    }
    
cout<<"Maximum no is : "<<max<<endl;
return 0;
}


