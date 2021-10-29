// Program to find Largest number from three numbers

#include<iostream>
using namespace std;

int main()
{
    int a, b, c,max;
    cout<<"Enter three nnumbers :"<<endl;
    cin>>a>>b>>c;

    if(b>c)
    {
        max= b;
    }
    else
    {
        max=c;
    }

    if(a>max)
    {
        max=a;
    };

    cout<<"Maximum is "<<max<<endl;
    return 0;

}