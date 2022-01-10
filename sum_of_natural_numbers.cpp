/* C++ program to Find Sum of n Natural Numbers using Recursion  */

#include<iostream>
using namespace std;

int add(int n);


int add(int n)
{
    if(n != 0)
        return n + add(n - 1);
    return 0;
}

int main()
{
    int n;

    cout << "\nEnter any positive integer :: ";
    cin >> n;

    cout << "\nThe Sum of natural numbers upto [ "<<n<<" ]  =  " << add(n)<<"\n";

    return 0;
}