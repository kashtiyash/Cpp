#include<iostream>
using namespace std;

int main()
{   int n;
    cout<<"Enter size of array you want : ";
    cin>>n;
    int A[n],item;

    cout<<"Enter the Element : "<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
  
cout<<"Enter the item to search : ";
cin>>item;

    for (int i=0;i<n;i++)
    { 
        if (A[i]==item)
        {
            cout<<endl<<"Element is at index : "<<i<<endl;
            return 0;
        } 
    }
    cout<<"Not Found."<<endl;

    
}