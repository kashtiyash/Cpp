//Sum of Subarrays 
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the ["<<i+1<<"] element : ";
        cin>>arr[i];
    }
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr = 0;
        for (int j = i; j < n; j++)
        {
            cout<<"Sum of subarray from index : ["<<i<<"] to ["<<j<<"] ::  ";
            curr += arr[j];
            cout<<curr<<endl;
        }
        cout<<endl;
        
    }
    
return 0;
}