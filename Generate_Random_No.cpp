#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,num;
    cout<<"How many numbers you want to genrate? "<<endl;
    cin>>num;
    if (num>0)
    {
    
    cout<<"\tNumers are :- "<<endl;
    for(i=0; i<num; i++)

        cout<<rand()<<endl;
    
    cout<<endl;
    
    }
    else
    {
        cout<<"Please Enter valid Number."<<endl;
    }
return 0;
}