#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin >> n;
    
    int arr[n];
    for (int i=0;i<n;i++ )
    {
        cout<<"Enter ["<<i+1<<"] element : ";
        cin>>arr[i];
    }


    int mx=arr[0];
    cout<<"\nMax till i'th element "<<endl;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx,arr[i]);
        cout<<mx<<"  ";
    }
    
return 0;

}
