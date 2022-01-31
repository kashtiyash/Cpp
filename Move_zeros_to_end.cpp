// Program to move all zeroes at the end of array

#include <iostream>
using namespace std;

// Function which pushes all zeros to end of an array.
void pushZerosToEnd(int arr[], int n)
{
    // Count of non-zero elements
	int count = 0; 

    for (int i = 0; i < n; i++)
		if (arr[i] != 0)
			arr[count++] = arr[i];


	while (count < n)
		arr[count++] = 0;
}

int main()
{

    cout<<"\t\t \n"<<endl;
    int n;
    cout<<"Enter size of array : ";
    cin >> n;

    int arr[n];
    for (int i=0;i<n;i++ )
    {
        cout<<"Enter ["<<i+1<<"] element : ";
        cin>>arr[i];
    }
    //displaying Unsorted array 
    cout<<"\nBefore Array : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    // Fuction call
    pushZerosToEnd(arr,n);

    //Displaying Sorted array 
    cout<<"\nAfter Array   : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

}