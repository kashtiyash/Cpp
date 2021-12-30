/*  C++ Program to raise any number X to power N  */

#include<iostream>
#include<math.h>   //for pow() function
using namespace std;

int main()
{

    int x,n,result;

    cout<<"\n\n\t\tProgram to raise any number X to power N\n\n";
    cout<<"Enter value of X (base):: ";
    cin>>x;
    cout<<"\nEnter value of N (power):: ";
    cin>>n;

    result=pow(x,n);

    cout<<"\nThe Power of Number [ "<<x<<" ^ "<<n<<" ] = "<<result<<"\n";

    return 0;
}