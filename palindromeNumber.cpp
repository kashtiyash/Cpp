//Program to check whether given number is palindrome.
#include<iostream>

using namespace std;
int main()
{
    int n,dn,temp=0,d;
    cout<<"Enter the number :";
    cin>>n;
    dn =n;
    
    while (dn!=0)
    
        {
            d = dn%10;
            temp = (temp*10)+d;
            dn=dn/10;

        }

    if (n==temp)
        {
            cout<<"The number "<<n<<" is Palindrome."; 

        }
    else
        {
            cout<<"The number "<<n<<" is Not Palindrome.";

        }

return 0;
}