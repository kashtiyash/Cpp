#include <iostream>
using namespace std;

int main() {
    int n, i;

    cout << "Enter a positive integer: ";
    cin >> n;

    if(n<0 || n==0 )
    {
        cout<<"Please Enter Valid Number. ";
    }
    else
    {
    cout << "Factors of " << n << " are :- ";  
    }

    for(i = 1; i <= n; ++i) 
    {
        if(n % i == 0)
            cout << i << " | ";
    }

    return 0;
}