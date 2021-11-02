#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the Year : ";
    cin>>year;

    if (year%4==0)
    {
        if (year%100==0)
        {
            if (year%400==0)
                cout<<year<<" is a Leap Year"<<endl;
            else
                cout<<year<<" is not a Leap Year"<<endl;
        }
            
        else
            cout<<year<<" is a Leap Year "<<endl;
    }
    else
    {
        cout<<year<<" is not a Leap Year"<<endl;
    }
    

  return 0;  
} 