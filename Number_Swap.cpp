//Swap number without using third vairable

#include <iostream>  
using namespace std;  
int main()  
{  
    int a, b; 
    cout<<"Enter the two numbers to swap :- ";
    cin>>a>>b; 

    cout<<"\t Before swap \na= "<<a<<" \nb= "<<b<<endl;      

    a=a*b; 
    b=a/b; 
    a=a/b; 

    cout<<"\t After swap \na= "<<a<<" \nb= "<<b<<endl;      

return 0;  
}
