/*
Program to find whether given number is armstrong or not.

 Armstrong number - If sum of the cubes of digits of a number is equal to the original number ,
                    then the number is said to be armstrong number .Eg.- 153, 370, 371, 407, 1634

*/

#include<iostream>
using namespace std;

int main()
{
    int n,dn,temp,d;
    cout<<"Enter the Number : ";
    cin>>n;
    dn=n;
    temp=0;

    while (dn!=0)
    {
        d=dn%10;
        temp = temp+(d*d*d);
        dn=dn/10;
    }
    if(n==temp)
    {
        cout<<n<<" is Armstrong Number.";
    }
    else
    {
        cout<<n<<" is not an Armstrong Number.";
    }
return 0;
}