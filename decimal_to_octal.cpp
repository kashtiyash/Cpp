#include<iostream>
using namespace std;
int main()
{

        long int decinum, quot;
        int i=1, j, octnum[100];
        cout<<"\tConversion of Decimal Number to Octal Number"<<endl;
        cout<<"Enter Decimal Number : ";
        cin>>decinum;
        quot=decinum;
        while(quot!=0)
        {
                octnum[i++]=quot%8;
                quot=quot/8;
        }
        cout<<"\nOctal Number of  "<<decinum<<"  is  ";
        
        for(j=i-1; j>0; j--)
        {
                cout<<octnum[j];
        }
        cout<<endl;
        return 0;
}