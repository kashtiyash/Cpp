#include<iostream>
using namespace std;

int main()
{             
    int fact,num;          // change datatype if number is greater (use double /long double)
   fact =1;
    cout<<"Enter the number : ";
    cin>>num;
    for (int i=1;i<=num;i++)
    {
        fact = fact*i;

    }
    cout<<"Factorial of "<<num<<" is "<<fact<<endl;

    return 0;
}