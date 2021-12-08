#include<iostream>
using namespace std;

int main()
{
    int n{};
    int count {};
    cout<<"Enter a number :- ";
    cin>>n;
    cout<<n<<" has got.  "<<endl;
    if (n==0)
    {
        cout<<1;
    }
    else
    {
        while (n!=0)
        {
            count++;
            n/=10;
        }
    
    cout<< count << " - digits "<<endl;
    }

return 0;
}