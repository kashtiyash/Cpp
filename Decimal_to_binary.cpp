#include<iostream>
using namespace std;

int main()
{
    int decimal_Num, binary_Num[20], i = 0;

    cout<<"Enter the Decimal Number: ";
    cin>>decimal_Num;

    while(decimal_Num!=0)
    {
        binary_Num[i] = decimal_Num%2;
        i++;
        decimal_Num = decimal_Num/2;
    }

    cout<<"\nEquivalent Binary Value :- ";
    for(i=(i-1); i>=0; i--)
        cout<<binary_Num[i];
    cout<<endl;

return 0;
}